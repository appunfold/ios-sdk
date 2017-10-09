//
//  AUManager.h
//  appunfold
//
//  Created by Aravind G S on 26/05/17.
//  Copyright © 2017 appunfold. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface AUManager : NSObject <UITableViewDataSource, UITableViewDelegate>

+ (AUManager *) sharedInstance;

- (void) initAppUnfoldProcess : (NSString *) token;

- (void) viewHierarchyChangedWithView:(UIView *)view;

- (void) viewAppeared : (UIViewController *)vc;

- (void) viewDisappeared : (UIViewController *)vc;

- (void) subviewLayoutCompleted;

- (void) deactivateSDK;

@end
