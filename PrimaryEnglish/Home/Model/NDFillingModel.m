//
//  NDFillingModel.m
//  PrimaryEnglish
//
//  Created by Nic Downey on 16/7/29.
//  Copyright © 2016年 Nic. All rights reserved.
//

#import "NDFillingModel.h"

@implementation NDFillingModel


- (NSString *)description
{
    NSString *str = [NSString stringWithFormat:@"type:%@-mp3Url:%@-tipLabelText:%@-content:%@-keys:%@",self.type,self.mp3Url,self.tipLabelText,self.content,self.keys];
    return str;
}

@end
