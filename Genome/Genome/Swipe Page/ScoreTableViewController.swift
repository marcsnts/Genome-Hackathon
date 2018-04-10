//
//  ScoreTableViewController.swift
//  Genome
//
//  Created by Marc on 2018-04-07.
//  Copyright © 2018 Flybits Inc. All rights reserved.
//

import UIKit

class ScoreTableViewController: PullUpController {
    let numPersonas = 10
    let tableView: UITableView = {
        let tableView = UITableView(frame: .zero, style: .grouped)
        tableView.backgroundColor = tableView.backgroundColor?.withAlphaComponent(0.7)
        tableView.translatesAutoresizingMaskIntoConstraints = false
        
        return tableView
    }()
    var scores: [GenomeScore]? {
        didSet {
            tableView.reloadData()
        }
    }
    let seperatorView: UIView = {
        let view = UIView()
        view.backgroundColor = .black
        view.alpha = 0.15
        view.layer.cornerRadius = 2
        view.translatesAutoresizingMaskIntoConstraints = false
        view.heightAnchor.constraint(equalToConstant: 5).isActive = true
        view.widthAnchor.constraint(equalToConstant: 40).isActive = true
        
        return view
    }()
    
    override func viewDidLoad() {
        super.viewDidLoad()
        view.backgroundColor = .clear
        setupTableView()
        
        let fun = GenomeScore(percentage: 60, attribute: .fun)
        let looks = GenomeScore(percentage: 70, attribute: .looks)
        let drinking = GenomeScore(percentage: 15, attribute: .drinking)
        let activity = GenomeScore(percentage: 44, attribute: .activity)
        let adventure = GenomeScore(percentage: 24, attribute: .adventurous)
        scores = [fun, looks, drinking, activity, adventure]
    }
    
    override func viewDidLayoutSubviews() {
        super.viewDidLayoutSubviews()
        
        view.layer.cornerRadius = 12
    }
    
    func setupTableView() {
        tableView.delegate = self
        tableView.dataSource = self
        tableView.register(ScoreTableViewCell.self, forCellReuseIdentifier: ScoreTableViewCell.reuseId)
        tableView.tableHeaderView = nil
        
        view.addSubview(tableView)
        tableView.leadingAnchor.constraint(equalTo: view.leadingAnchor).isActive = true
        tableView.trailingAnchor.constraint(equalTo: view.trailingAnchor).isActive = true
        tableView.topAnchor.constraint(equalTo: view.topAnchor).isActive = true
        tableView.bottomAnchor.constraint(equalTo: view.bottomAnchor).isActive = true
        
        tableView.addSubview(seperatorView)
        seperatorView.topAnchor.constraint(equalTo: tableView.layoutMarginsGuide.topAnchor).isActive = true
        seperatorView.centerXAnchor.constraint(equalTo: tableView.centerXAnchor).isActive = true
        
        tableView.attach(to: self)
    }
    
    override var pullUpControllerPreferredSize: CGSize {
        return CGSize(width: UIScreen.main.bounds.width, height: UIScreen.main.bounds.height * 0.7)
    }
    
    override var pullUpControllerPreviewOffset: CGFloat {
        return 90
    }

    override var pullUpControllerIsBouncingEnabled: Bool {
        return false
    }
}

extension ScoreTableViewController: UITableViewDelegate, UITableViewDataSource {
    func numberOfSections(in tableView: UITableView) -> Int {
        return 1
    }
    
    func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return scores?.count ?? 0
    }

    func tableView(_ tableView: UITableView, heightForHeaderInSection section: Int) -> CGFloat {
        return 15
    }

    func tableView(_ tableView: UITableView, titleForHeaderInSection section: Int) -> String? {
        return "Persona Rankings"
    }
    
    func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        guard let cell = tableView.dequeueReusableCell(withIdentifier: ScoreTableViewCell.reuseId, for: indexPath) as? ScoreTableViewCell, let genomeScores = scores else { return UITableViewCell() }
        
        cell.genomeScore = genomeScores[indexPath.row]
        cell.selectionStyle = .none
        cell.backgroundColor = UIColor.white.withAlphaComponent(0.8)
        
        return cell
    }
    
    func tableView(_ tableView: UITableView, heightForRowAt indexPath: IndexPath) -> CGFloat {
        return ScoreTableViewCell.height
    }
}

struct GenomeScore {
    let percentage: Double
    let attribute: GenomeAttribute
}

enum GenomeAttribute {
    case looks
    case activity
    case drinking
    case fun
    case adventurous
    
    var title: String {
        switch self {
        case .looks:
            return "Looks"
        case .activity:
            return "Activity"
        case .drinking:
            return "Drinking"
        case .fun:
            return "Fun"
        case .adventurous:
            return "Adventurous"
        }
    }
    
    var color: UIColor {
        switch self {
        case .looks:
            return UIColor(red: 215/255, green: 193/255, blue: 48/255, alpha: 1)
        case .activity:
            return UIColor(red: 39/255, green: 79/255, blue: 88/255, alpha: 1)
        case .drinking:
            return UIColor(red: 241/255, green: 65/255, blue: 51/255, alpha: 1)
        case .fun:
            return UIColor(red: 89/255, green: 141/255, blue: 9/255, alpha: 1)
        case .adventurous:
            return UIColor(red: 6/255, green: 108/255, blue: 133/255, alpha: 1)
        }
    }
}
