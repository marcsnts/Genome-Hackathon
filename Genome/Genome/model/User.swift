//
//  User.swift
//  Genome
//
//  Created by Ankur on 2018-04-07.
//  Copyright © 2018 Flybits Inc. All rights reserved.
//

import Foundation

class User {
    var firstName: String
    var lastName: String
    var age: Int
    var image: String
    var score: Double
    
    init(firstName: String, lastName: String, age: Int, image: String, score: Double) {
        self.firstName = firstName
        self.lastName = lastName
        self.age = age
        self.image = image
        self.score = score
    }

}
