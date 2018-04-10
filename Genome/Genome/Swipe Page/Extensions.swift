//
//  Extensions.swift
//  Genome
//
//  Created by Marc on 2018-04-08.
//  Copyright © 2018 Flybits Inc. All rights reserved.
//

import Foundation
import UIKit

extension Double {
    func percentageColor() -> UIColor {
        switch self {
        case 0..<25:
            return UIColor(red: 204/255, green: 51/255, blue: 0, alpha: 1)
        case 25..<50:
            return UIColor(red: 1, green: 204/255, blue: 0, alpha: 1)
        case 50..<75:
            return UIColor(red: 153/255, green: 204/255, blue: 51/255, alpha: 1)
        case 75...:
            return UIColor(red: 51/255, green: 153/255, blue: 0, alpha: 1)
        default:
            return .white
        }
    }
}
