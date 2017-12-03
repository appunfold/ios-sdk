# Appunfold iOS SDK Integration Document

[![CocoaPods Compatible](https://img.shields.io/cocoapods/v/Appunfold.svg)](https://img.shields.io/cocoapods/v/Appunfold.svg)
[![Carthage Compatible](https://img.shields.io/badge/Carthage-compatible-4BC51D.svg?style=flat)](https://github.com/Carthage/Carthage)
[![Platform](https://img.shields.io/cocoapods/p/Appunfold.svg?style=flat)](http://cocoapods.org/pods/Appunfold)

  This guide will provide you with step by step details on how to integrate the SDK in just a few minutes. The following steps outline the integration process in details.

  ## Steps to integrate the sdk to your Xcode - iOS project
  - [Step 1 : Download the appunfold framework](#step-1--download-the-appunfold-framework)
  - [Step 2 : Attach appunfold framework to your iOS project](#step-2--attach-appunfold-framework-to-your-ios-project)
  - [Step 3 : Initiate the appunfold framework](#step-3--initiate-the-appunfold-framework)

  If you are using Cocoapods or Carthage, skip Step 1 & Step 2, go directly to [Step 3](#Step-3--Initiate-the-appunfold-framework).

  ### Cocoapods
  Add 
  ```
    pod 'Appunfold', '~> 1.0'
  ``` 
  to your Podfile.
  In terminal, go to the folder of your project and enter ``pod install``. Open <your-project-name.xcworkspace>

  ### Carthage
  Add 
  ```
    github "Appunfold/ios-sdk"
  ``` 
  to your Cartfile. In terminal, go to the folder of your project and enter ``carthage update``

### Step 1 : Download the appunfold framework
  Download the appunfold sdk from [here](http://console.appunfold.com)

  Alternatively you can clone the appunfold github repo
  ```
    git clone https://github.com/appunfold/ios-sdk
  ```
The ***appunfold.framework*** is to be copied into your project folder.

### Step 2 : Attach appunfold framework to your iOS project
- Click on the ***project*** folder on the project navigator panel.
- Click on the application under ***Targets*** and go to the ***General*** tab as shown in image below
- Click on ***+*** button under ***Embedded Binaries*** as shown in image below.
- Click on ***Add Other*** from the dialog that appears.
- Select ***appunfold.framework*** from the project folder. 
- If prompted with a dialog that asks whether to copy the framework, click on ***Yes***.

### Step 3 : Initiate the appunfold framework
- In your AppDelegate file, import the appunfold framework

  Swift :
  ```Swift
    import appunfold
  ```
  Objective-C:
  ```Objective-C 
    #import <appunfold/appunfold.h>
  ```

- In the `didFinishLaunchingWithOptions:` method initiate the appunfold sdk using the initMethod as shown below

  Swift :
  ```Swift
    func application(_application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplicationLaunchOptionsKey: Any]?) -> Bool {
      //Override point for customization after application launch.
      AppunfoldSDK.sharedInstance().initWithAPIKey("<YOUR-API-KEY>")
    } 
  ```

  Objective-C : 
  ```Objective-C
    -(BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
      // Override point for customization after application launch.
      [[AppunfoldSDK sharedInstance] initWithAPIKey:@"<YOUR-API_KEY>"];
    }
  ```
  Note - The ***API-KEY*** can be obtained from the integration page of your app in the appunfold dashboard.


## Tracking User

  You can track your user's activity with our tools. For that to happen, you have to map user information. This mapping can by done by using following api:

  Swift
  ```Swift
    AppunfoldSDK.sharedInstance().setUserWithId("<User-Id>", 
                                      username  : "<username>", 
                                          email : "<email>", 
                                  andParameters : ["<param1>":"<value1>","<param2>":"<value2>"])
  ```
  Objective C
  ```Objective-C
    [[AppunfoldSDK sharedInstance] setUserWithId:@"<User-Id>"
                                        username:@"<Username>"
                                           email:@"<Email>"
                                   andParameters:@{@"<param1>":@"<value1>",@"<param2>":@"<value2>"}];
  ```
  This API identifies individual users and maps corresponding analytical data. All the parameters except userid are optional. You can add any number of parameters in the dictionary parameters provided in the api.

  Please note that you have to intialise the AppunfoldSDK before using this API.

## Advanced
  - ### Help center Visibiity
    You can control the visibility of AppunfoldSDK's help center by your code. It can be done using following api

    Swift :
    ```Swift
      AppunfoldSDK.sharedInstance().showHelpCenter()
    ```

    Objective C :  
    ```Objective-C
      [[AppunfoldSDK sharedInstance] showHelpCenter];
    ``` 
  - ### FAB Visibility
    To know if the FAB button is currently enabled for your application the following api can be used

    Swift :
    ```Swift
      let x = AppunfoldSDK.sharedInstance().isFABEnabled() 
      // x will be `true` if fab is enabled; `false` if not
    ```

    Objective C :
    ```Objective-C
      BOOL x = [[AppunfoldSDK sharedInstance] isFABEnabled];
      // x will be `YES` is fab is enabled; `NO` if not
    ``` 

    To enable/disable FAB the below mentioned API can be used

    Swift : 
    ```Swift
      AppunfoldSDK.sharedInstance().enableFAB(<true/false>)
    ```

    Objective C :
    ```Objective-C
      [[AppunfoldSDK sharedInstance] enableFAB:<YES/NO>];
    ```
  
