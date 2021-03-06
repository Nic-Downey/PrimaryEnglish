//
//  UserModel.h
//  PrimaryEnglish
//
//  Created by Nic Downey on 20/7/12.
//  Copyright © 2020年 Nic. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface UserModel : NSObject<NSCoding>

@property (nonatomic,strong) UIImage *image;
@property (nonatomic,copy) NSString *phone;
@property (nonatomic,copy) NSString *nickName;
@property (nonatomic,copy) NSString *code;
@property (nonatomic,assign) NSInteger status;
@end
