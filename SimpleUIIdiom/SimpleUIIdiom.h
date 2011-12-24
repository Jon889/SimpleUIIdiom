//
//  SimpleUIIdiom.h
//  SimpleUIIdiom
//
//  Created by Jonathan Bailey on 24/12/2011.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//
#import <UIKit/UIKit.h>

@interface iPadCode : NSObject
+(void):(void (^)(void))ipadBlock;
@end
@interface iPhoneCode : NSObject
+(void):(void (^)(void))iphoneBlock;
@end

#define $iPadCode if (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad) {
#define $endiPadCode }

#define $iPhoneCode if (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone) {
#define $endiPhoneCode }

#define iPadCode iPadCode:^
#define iPhoneCode iPhoneCode:^