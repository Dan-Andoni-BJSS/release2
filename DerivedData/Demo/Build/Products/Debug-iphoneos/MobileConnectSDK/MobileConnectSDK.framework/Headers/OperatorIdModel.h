//
//  OperatorIdModel.h
//  MobileConnectDemo
//
//  Created by Andoni Dan on 13/05/16.
//  Copyright © 2016 dan. All rights reserved.
//

#import "LinkModel.h"
#import "MCModel.h"

@interface OperatorIdModel : MCModel

@property (nullable) NSArray<LinkModel>* link;

- (nullable NSString*)authorizationLink;
- (nullable NSString*)tokenLink;
- (nullable NSString*)userInfoLink;
- (nullable NSString*)openIdConfiguration;
- (nullable NSString*)linkForParameter:(nonnull NSString*)parameter;
- (nullable NSString*)premiumInfo;
- (nullable NSString*)tokenRevocation;
- (nullable NSString*)JSONWebTokenValidation;
- (nullable NSString*)applicationShortName;

@end
