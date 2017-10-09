//
//  AUManager.h
//  appunfold
//
//  Created by Aravind G S on 26/05/17.
//  Copyright © 2017 appunfold. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface AppunfoldSDK : NSObject <UITableViewDataSource, UITableViewDelegate>

+ (AppunfoldSDK *) sharedInstance;

- (void) initWithAPIKey : (NSString *) token;

- (void) viewHierarchyChangedWithView:(UIView *)view;

- (void) deactivateSDK;

@end
