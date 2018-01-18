//
//  AUManager.h
//  appunfold
//
//  Created by Aravind G S on 26/05/17.
//  Copyright © 2017 appunfold. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


@interface AppunfoldSDK : NSObject


/**
 Create a global instance

 @return global instace
 */
+ (AppunfoldSDK * _Nonnull) sharedInstance;

/**
 Get the version of the Appunfold SDK

 @return version
 */
+ (NSString * _Nonnull) version;

/**
 Basic sdk initializer method

 @param token app token from Appunfold dashboard
 */
- (void) initWithAPIKey:(NSString * _Nonnull) token;

/**
 SDK Initializer method allowing client key

 @param token app token from Appunfold dashboard
 @param clientKey client key specific to your client
 */
- (void) initWithAPIKey:(NSString * _Nonnull)token
           andClientKey:(NSString * _Nonnull)clientKey;

/**
 SDK Initializer method allowing to control fab button visibility
 If YES is provided to fabHidden, the fab button is hidden;
 If NO is provided to fabHidden, default fab button visibility from dashboard is used.
 To override and make fab visible always use `- (void)enableFAB:(BOOL)enable` method

 @param token app token from Appunfold dashboard
 @param fabHidden YES/NO
 */
- (void) initWithAPIKey:(NSString * _Nonnull)token
       andHideFabButton:(BOOL)fabHidden;

/**
 SDK Initializer method with control over sync process
 If isManual is provided with YES, call `-(void)sync` method to sync
 
 @param token app token from Appunfold dashboard
 @param isManual YES to control sync; NO will make sync process automatic
 */
- (void) initWithAPIKey:(NSString * _Nonnull)token
          andManualSync:(BOOL)isManual;

/**
 SDK Initializer method with clientKey & fab visibility control
 
 If YES is provided to fabHidden, the fab button is hidden;
 If NO is provided to fabHidden, default fab button visibility from dashboard is used.
 To override and make fab visible always use `- (void)enableFAB:(BOOL)enable` method

 @param token app token from appunfold dashboard
 @param clientKey client key specific to your client
 @param fabHidden YES/NO
 */
- (void) initWithAPIKey:(NSString * _Nonnull)token
              clientKey:(NSString * _Nonnull)clientKey
       andHideFabButton:(BOOL) fabHidden;

/**
 SDK Initializer method with client key and sync control

 If isManual is provided with YES, call `-(void)sync` method to sync
 
 @param token app token from appunfold dashboard
 @param clientKey client key specific to your client
 @param isManual YES/NO
 */
- (void) initWithAPIKey:(NSString * _Nonnull)token
              clientKey:(NSString * _Nonnull)clientKey
          andManualSync:(BOOL)isManual;

/**
 SDK Initializer method with sync & fab visibility control
 
 If isManual is provided with YES, call `-(void)sync` method to sync
 
 If YES is provided to fabHidden, the fab button is hidden;
 If NO is provided to fabHidden, default fab button visibility from dashboard is used.
 To override and make fab visible always use `- (void)enableFAB:(BOOL)enable` method

 @param token app token from appunfold dashboard
 @param isManual YES/NO
 @param fabHidden YES/NO
 */
- (void) initWithAPIKey:(NSString * _Nonnull)token
             manualSync:(BOOL)isManual
       andHideFabButton:(BOOL)fabHidden;

/**
 SDK Initializer method with client key, sync & fab visibility control
 
 If isManual is provided with YES, call `-(void)sync` method to sync
 
 If YES is provided to fabHidden, the fab button is hidden;
 If NO is provided to fabHidden, default fab button visibility from dashboard is used.
 To override and make fab visible always use `- (void)enableFAB:(BOOL)enable` method

 @param token app token from appunfold dashboard
 @param clientKey client key specific to your client
 @param isManual YES/NO
 @param fabHidden YES/NO
 */
- (void) initWithAPIKey:(NSString * _Nonnull)token
              clientKey:(NSString * _Nonnull)clientKey
             manualSync:(BOOL)isManual
       andHideFabButton:(BOOL)fabHidden;

/**
 Set specific userid, username, email and additional values to your user

 @param userId userId // Mandatory
 @param username username
 @param email email
 @param parameters parameters
 */
- (void) setUserWithId:(NSString * _Nonnull)userId
              username:(NSString * _Nullable)username
                 email:(NSString * _Nullable)email
         andParameters:(NSDictionary * _Nullable)parameters;

/**
 Deactivate the SDK
 */
- (void) deactivateSDK;

/**
 Check if fab is visible

 @return YES if fab is visible; else NO
 */
- (BOOL) isFABEnabled;

/**
 Enable/Disable fab button

 @param enable YES/NO
 */
- (void) enableFAB:(BOOL)enable;

/**
 Show contextual help based on the current screen
 */
- (void) showQuickHelp;

/**
 Launch help center
 */
- (void) showHelpCenter;

/**
 Sync data from Appunfold server
 */
- (void) sync;

/**
 Sync data from Appunfold server

 @param completion Callback when sync is complete; error object will be nil if sync is successful else error object is returned
 */
- (void) sync:(void(^_Nullable)(NSError * _Nullable error))completion;

@end
