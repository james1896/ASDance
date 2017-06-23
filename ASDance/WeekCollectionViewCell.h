//
//  courseCollectionViewCell.h
//  ASDance
//
//  Created by toby on 21/06/2017.
//  Copyright © 2017 kg.self.edu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WeekCollectionViewCell : UICollectionViewCell
@property (strong, nonatomic) IBOutlet UILabel *weekLab;

- (void)resetData;
@end
