//
//  ScoreTableViewCell.swift
//  Genome
//
//  Created by Marc on 2018-04-07.
//  Copyright © 2018 Flybits Inc. All rights reserved.
//

import UIKit

class ScoreTableViewCell: UITableViewCell {
    static let reuseId = "ScoreTableCell"
    static let height: CGFloat = 75
    
    let titleLabel: UILabel = {
        let label = UILabel()
        label.font = .systemFont(ofSize: 17, weight: .light)
        label.translatesAutoresizingMaskIntoConstraints = false

        return label
    }()
    let percentageLabel: UILabel = {
        let label = UILabel()
        label.font = .systemFont(ofSize: 14, weight: .semibold)
        label.translatesAutoresizingMaskIntoConstraints = false
        label.textAlignment = .right
        
        return label
    }()
    let percentageView: UIView = {
        let view = UIView()
        view.layer.cornerRadius = 5
        view.translatesAutoresizingMaskIntoConstraints = false
        view.heightAnchor.constraint(equalToConstant: 12).isActive = true
        
        return view
    }()
    var percentageViewWidthConstraint: NSLayoutConstraint?
    var genomeScore: GenomeScore? {
        didSet {
            guard let genomeScore = genomeScore else { return }
            set(score: genomeScore)
        }
    }
    
    override init(style: UITableViewCellStyle, reuseIdentifier: String?) {
        super.init(style: style, reuseIdentifier: reuseIdentifier)
        setupSubviews()
    }
    
    required init?(coder aDecoder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }
    
    func set(score: GenomeScore) {
        percentageView.backgroundColor = score.attribute.color
        percentageViewWidthConstraint = percentageView.widthAnchor.constraint(equalTo: widthAnchor, multiplier: CGFloat((score.percentage/100)*0.7))
        percentageViewWidthConstraint?.isActive = true
        percentageView.layoutIfNeeded()
        percentageLabel.text = "\(score.percentage)%"
        percentageLabel.textColor = score.percentage.percentageColor()
        titleLabel.text = score.attribute.title
    }
    
    func setupSubviews() {
        let titlePercentageStackView: UIStackView = {
            let stackView = UIStackView(arrangedSubviews: [titleLabel, percentageView])
            stackView.alignment = UIStackViewAlignment.leading
            stackView.axis = .vertical
            stackView.distribution = .equalSpacing
            stackView.spacing = 5
            stackView.translatesAutoresizingMaskIntoConstraints = false
            
            return stackView
        }()
        addSubview(titlePercentageStackView)
        titlePercentageStackView.leadingAnchor.constraint(equalTo: layoutMarginsGuide.leadingAnchor).isActive = true
        titlePercentageStackView.centerYAnchor.constraint(equalTo: centerYAnchor).isActive = true
        titlePercentageStackView.widthAnchor.constraint(equalTo: widthAnchor, multiplier: 0.7).isActive = true
        
        addSubview(percentageLabel)
        percentageLabel.trailingAnchor.constraint(equalTo: layoutMarginsGuide.trailingAnchor).isActive = true
        percentageLabel.centerYAnchor.constraint(equalTo: centerYAnchor).isActive = true
    }
}
