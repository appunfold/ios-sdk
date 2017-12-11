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

+ (NSString * _Nonnull) version;

- (void) initWithAPIKey:(NSString * _Nonnull) token;

- (void) initWithAPIKey:(NSString * _Nonnull)token
           andClientKey:(NSString * _Nonnull)clientKey;

- (void) initWithAPIKey:(NSString * _Nonnull)token
       andHideFabButton:(BOOL)fabHidden;

- (void) initWithAPIKey:(NSString * _Nonnull)token
          andManualSync:(BOOL)isManual;

- (void) initWithAPIKey:(NSString * _Nonnull)token
              clientKey:(NSString * _Nonnull)clientKey
       andHideFabButton:(BOOL) fabHidden;

- (void) initWithAPIKey:(NSString * _Nonnull)token
              clientKey:(NSString * _Nonnull)clientKey
          andManualSync:(BOOL)isManual;

- (void) initWithAPIKey:(NSString * _Nonnull)token
             manualSync:(BOOL)isManual
       andHideFabButton:(BOOL)fabHidden;

- (void) initWithAPIKey:(NSString * _Nonnull)token
              clientKey:(NSString * _Nonnull)clientKey
             manualSync:(BOOL)isManual
       andHideFabButton:(BOOL)fabHidden;

- (void) viewHierarchyChangedWithView:(UIView *  _Nullable)view;

- (void) setUserWithId:(NSString * _Nonnull)userId
              username:(NSString * _Nullable)username
                 email:(NSString * _Nullable)email
         andParameters:(NSDictionary * _Nullable)parameters;

- (void) deactivateSDK;

- (BOOL) isFABEnabled;

- (void) enableFAB:(BOOL)enable;

- (void) showQuickHelp;

- (void) showHelpCenter;

- (void) sync;

- (void) sync:(void(^_Nullable)(NSError * _Nullable error))completion;

@end
