//
//  AppDelegate.swift
//  Genome
//
//  Created by Marc on 2018-04-07.
//  Copyright © 2018 Flybits Inc. All rights reserved.
//

import UIKit
import FlybitsSDK

@UIApplicationMain
class AppDelegate: UIResponder, UIApplicationDelegate {

    var window: UIWindow?


    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplicationLaunchOptionsKey: Any]?) -> Bool {
        
        window = {
            let window = UIWindow()
//            UINavigationController(rootViewController: ViewController())
            window.rootViewController = UINavigationController(rootViewController: ViewController())
            
            return window
        }()
        window?.makeKeyAndVisible()
                
        return true
    }
}
