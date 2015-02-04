//
// Created by liuqin.sheng on 2/1/15.
// Copyright (c) 2015 peaches.io. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVOSCloud/AVOSCloud.h>

@interface ProductObject : AVObject <AVSubclassing>
@property (nonatomic) int ID;
@property (strong, nonatomic)NSString *name;
@property (strong, nonatomic)NSString *manufacturer;
@property (strong, nonatomic)NSString *details;
@end