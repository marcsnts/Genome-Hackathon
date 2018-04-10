//
//  ViewController.swift
//  Genome
//
//  Created by Marc on 2018-04-07.
//  Copyright © 2018 Flybits Inc. All rights reserved.
//

import UIKit
import DMSwipeCards

class ViewController: UIViewController {
    private var swipeView: DMSwipeCardsView<User>!
    private var count = 0
    
    let navColor = UIColor(red: 223/255, green: 227/255, blue: 251/255, alpha: 1)

    override func viewDidLoad() {
        super.viewDidLoad()
        title = "Discovery"
        
        navigationController?.navigationBar.barTintColor = navColor
        navigationController?.navigationBar.isTranslucent = false
        view.backgroundColor = .white
        setupSwipeView()
        let pullUpVc = ScoreTableViewController()
        addPullUpController(pullUpVc)
//        Flybits.shared.login()

//        Flybits.shared.getRecommended()
    }
    
    override func viewDidAppear(_ animated: Bool) {
        Flybits.shared.login()
    }
    
    func setupSwipeView() {
        let viewGenerator: (User, CGRect) -> (UIView) = { (element: User, frame: CGRect) -> (UIView) in
            let container = UIView(frame: frame)

            let infoView: UIView = {
                let view = UIView()
                view.backgroundColor = self.navColor
                view.translatesAutoresizingMaskIntoConstraints = false
                
                let titleLabel: UILabel = {
                    let label = UILabel()
                    label.translatesAutoresizingMaskIntoConstraints = false
                    label.text = "\(element.firstName) \(element.lastName)"
                    label.font = .systemFont(ofSize: 20, weight: .semibold)
                    label.adjustsFontSizeToFitWidth = true
                    label.minimumScaleFactor = 0.9
                    
                    return label
                }()
                view.addSubview(titleLabel)
                titleLabel.centerYAnchor.constraint(equalTo: view.centerYAnchor).isActive = true
                titleLabel.leadingAnchor.constraint(equalTo: view.layoutMarginsGuide.leadingAnchor).isActive = true
                
                let percentageLabel: UILabel = {
                    let label = UILabel()
                    label.translatesAutoresizingMaskIntoConstraints = false
                    label.text = "\(element.score)%"
                    label.font = .systemFont(ofSize: 17)
                    label.textColor = element.score.percentageColor()
                    label.textAlignment = .right
                    
                    return label
                }()
                view.addSubview(percentageLabel)
                percentageLabel.centerYAnchor.constraint(equalTo: view.centerYAnchor).isActive = true
                percentageLabel.trailingAnchor.constraint(equalTo: view.layoutMarginsGuide.trailingAnchor).isActive = true

                return view
            }()
            container.addSubview(infoView)
            infoView.bottomAnchor.constraint(equalTo: container.bottomAnchor).isActive = true
            infoView.leadingAnchor.constraint(equalTo: container.leadingAnchor).isActive = true
            infoView.trailingAnchor.constraint(equalTo: container.trailingAnchor).isActive = true
            infoView.heightAnchor.constraint(equalToConstant: 60).isActive = true
            
            // Set background
            let bgimage: UIImageView = {
                let image = UIImageView(image: UIImage(named: "\(element.image)"))
                image.translatesAutoresizingMaskIntoConstraints = false
                image.contentMode = .scaleAspectFill
                
                return image
            }()
            container.addSubview(bgimage)
            bgimage.widthAnchor.constraint(equalTo: container.widthAnchor).isActive = true
            bgimage.centerXAnchor.constraint(equalTo: container.centerXAnchor).isActive = true
            bgimage.topAnchor.constraint(equalTo: container.topAnchor).isActive = true
            bgimage.bottomAnchor.constraint(equalTo: infoView.topAnchor).isActive = true
            
            return container
        }
        
        let overlayGenerator: (SwipeMode, CGRect) -> (UIView) = { (mode: SwipeMode, frame: CGRect) -> (UIView) in
            let label = UILabel()
            label.frame.size = CGSize(width: 100, height: 100)
            label.center = CGPoint(x: frame.width / 2, y: frame.height / 2)
            label.layer.cornerRadius = label.frame.width / 2
            label.backgroundColor = mode == .left ? UIColor.green : UIColor.red
            label.clipsToBounds = true
            label.text = mode == .left ? "👍" : "👎"
            label.font = UIFont.systemFont(ofSize: 24)
            label.textAlignment = .center
            return label
        }
        
        let users = [
            User(firstName: "Michael", lastName: "Easterling", age: 32, image: "m_user_image_one", score: 10),
            User(firstName: "Sherry", lastName: "Roberts", age: 20, image: "f_user_image_one", score: 20),
            User(firstName: "Lillie", lastName: "Gilbert", age: 40, image: "f_user_image_one", score: 30),
            User(firstName: "Meredith", lastName: "Brizendine", age: 36, image: "f_user_image_one", score: 40),
            User(firstName: "Terry", lastName: "Guillaume", age: 53, image: "m_user_image_one", score: 50),
            User(firstName: "Derrick", lastName: "Mason", age: 27, image: "m_user_image_one", score: 60),
            User(firstName: "Cynthia", lastName: "Patten", age: 32, image: "f_user_image_one", score: 70),
            User(firstName: "Scott", lastName: "Campbell", age: 45, image: "m_user_image_one", score: 80)
        ]
        
        let frame = CGRect(x: 20, y: 20, width: self.view.frame.width - 40, height: self.view.frame.height - 200)
        swipeView = DMSwipeCardsView<User>(frame: frame, viewGenerator: viewGenerator, overlayGenerator: overlayGenerator)
        
        swipeView.delegate = self
        swipeView.addCards(users)
        
        self.view.addSubview(swipeView)

    }
}

extension ViewController: DMSwipeCardsViewDelegate {
    func swipedLeft(_ object: Any) {
        print("Swiped left: \(object)")
        guard let matchedUser = object as? User else { return }
        
        let alertController: UIAlertController = {
            let alert = UIAlertController(title: "You got a match!", message: "You just got matched with \(matchedUser.firstName) \(matchedUser.lastName)!", preferredStyle: .alert)
            alert.addAction(UIAlertAction(title: "Act on it!", style: .default, handler: { _ in
                
            }))
            return alert
        }()
        
        present(alertController, animated: true, completion: nil)
    }
    
    func swipedRight(_ object: Any) {
        print("Swiped right: \(object)")
    }
    
    func cardTapped(_ object: Any) {
        print("Tapped on: \(object)")
    }
    
    func reachedEndOfStack() {
        print("Reached end of stack")
    }
}
