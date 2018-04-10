//
//  Flybits.swift
//  Genome
//
//  Created by Marc on 2018-04-10.
//  Copyright © 2018 Flybits Inc. All rights reserved.
//

import Foundation
import FlybitsPushSDK
import FlybitsKernelSDK
import FlybitsContextSDK

class Flybits {
    let scopes: [FlybitsScope] = [KernelScope(), ContextScope(timeToUploadContext: 1, timeUnit: .minutes, autoStartContextCollection: true, pluginTypes: nil), PushScope()]
    let projectId = "66391ABD-9C6D-4A5D-AC25-8C53D8A2EFAA"
    var manager: FlybitsManager
    
    static let shared = Flybits()
    private init() {
        let idp = FlybitsIDP(email: "coreymcgrillis@flybits.com", password: "123456789")
        let projectId = "D66107F1-BD33-44B4-948B-307D2C835934"
        FlybitsManager.environment = .Development
        self.manager = FlybitsManager(projectID: projectId, idProvider: idp, scopes: scopes)!
    }
    
    func login() {
        _ = FlybitsManager.isConnected { user, error in
            if let user = user {
                print("Flybits connected")
                print(user.firstname)
                print(user.lastname)
                self.getRecommended()
            } else {
                _ = self.manager.connect { user, error in
                    guard let user = user, error == nil else {
                        print("Failed to connect to Flybits \(error?.localizedDescription)")
                        return
                    }
                    
                    print("Flybits connected")
                }
            }
        }
    }
    
    func getRecommended() {
        let request: URLRequest = {
            var request = URLRequest(url: URL(string: "https://dev3.flybits.com/context/ctxrepo/recommended")!)
            request.httpMethod = "GET"
            let xAuth = "eyJhbGciOiJIUzI1NiIsImtpZCI6IkQ2NjEwN0YxLUJEMzMtNDRCNC05NDhCLTMwN0QyQzgzNTkzNCIsInR5cCI6IkpXVCJ9.eyJleHAiOjE1Mjg0NzkwNzYsIm5iZiI6MTUyMzI5NTA3NiwidXNlcklEIjoiQjE2RUU1OEYtQUNDOS00NDI5LTlFRDMtNjJGNjAzREVFMTAwIiwiZGV2aWNlSUQiOiJFNDhBMTY2MS1CNzk4LTQwRDYtQTk3OS1GOEQ0MzZCNEE5MDYiLCJ0ZW5hbnRJRCI6IkQ2NjEwN0YxLUJEMzMtNDRCNC05NDhCLTMwN0QyQzgzNTkzNCIsImlzU2VydmljZUFjY291bnQiOiIifQ.sQLjkzybFipgjwnpFkhRaLctUMIJsshuyiRxCoaIjHE"
            request.addValue(xAuth, forHTTPHeaderField: "X-Authorization")

            return request
        }()
        
        let config = URLSessionConfiguration.default
        let session = URLSession(configuration: config)
        
        session.dataTask(with: request) { data, response, error in
            guard let data = data else { return }
            
            let dataString = String(data: data, encoding: .utf8)
            print(dataString)
        }.resume()
    }
    
}
