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

+ (AppunfoldSDK * _Nonnull) sharedInstance;

- (void) initWithAPIKey : (NSString * _Nonnull) token;

- (void) viewHierarchyChangedWithView:(UIView *  _Nullable)view;

- (void) setUserWithId:(NSString * _Nonnull)userId username:(NSString * _Nullable)username email:(NSString * _Nullable)email andParameters:(NSDictionary * _Nullable)parameters;

- (void) deactivateSDK;

- (BOOL) isFABEnabled;

- (void) enableFAB:(BOOL)enable;

- (void) showHelpCenter;

@end
