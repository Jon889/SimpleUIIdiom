//
//  SimpleUIIdiom.m
//  SimpleUIIdiom
//
//  Created by Jonathan Bailey on 24/12/2011.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import "SimpleUIIdiom.h"
#undef iPadCode
#undef iPhoneCode
@implementation iPadCode
+(void):(void (^)(void))ipadBlock {
    if (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad) {
        ipadBlock();
    }
}
@end

@implementation iPhoneCode
+(void):(void (^)(void))iphoneBlock {
    if (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone) {
        iphoneBlock();
    }
}
@end

