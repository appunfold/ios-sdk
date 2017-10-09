# Appunfold iOS SDK Integration Document

This guide will provide you with step by step details on how to integrate the SDK in just a few minutes. The following steps outline the integration process in details.

## Steps to integrate the sdk to your Xcode - iOS project
- ### [Step 1 : Download the appunfold framework]()
- ### [Step 2 : Attach appunfold framework to your iOS project]()
- ### [Step 3 : Initiate the appunfold framework]()

- ### [Step 4 : Sending user data to Appunfold]()


If you are using Cocoapods, skip Step 1 & Step 2, go directly to [Step 3].

### Cocoapods
Add 
```
pod Appunfold ~> 1.0
``` 
to your Podfile.
In terminal, go to the folder of your project and enter ``pod install``. Open <your-project-name.xcworkspace>

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

