//
//  CCURLRouter.h
//  LBModuleServer
//
//  Created by 李冰 on 2018/4/16.
//  Copyright © 2018年 李冰. All rights reserved.
//

#import <Foundation/Foundation.h>

FOUNDATION_EXTERN NSString * const CCURLRouterOpenMethodPush;

FOUNDATION_EXTERN NSString * const CCURLRouterOpenMethodPresent;

FOUNDATION_EXTERN NSString * const CCURLRouterIDKey;

FOUNDATION_EXTERN NSString * const CCURLRouterOpenMethodKey;

FOUNDATION_EXTERN NSString * const CCURLRouterAuthorizationKey;

FOUNDATION_EXTERN NSString * const CCURLRouterCustomParameterKey;

@interface CCURLRouter : NSObject

- (id)openURL:(NSURL *)URL;

- (id)openURL:(NSURL *)URL customParameter:(NSDictionary *)parameter;

- (id)openURL:(NSURL *)URL openMethod:(NSString *)openMethod authorization:(NSString *)authorization ID:(NSString *)ID customParameter:(NSDictionary *)parameter;

- (NSString *)classNameWithURL:(NSURL *)URL;

@end
