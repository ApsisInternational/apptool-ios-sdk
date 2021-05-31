## Quick start

- Add framework to XCode project
- Enable DataCollection

Swift
```Swift
import ApsisOne

@main
class AppDelegate: UIResponder, UIApplicationDelegate {

    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey: Any]?) -> Bool {
        // Should be set true only when you have opt-in consent from user 
        ApsisOneAPI.collectDataEnabled(true)
        return true
    }
}
```

Objective-C
```Objective-c
@import ApsisOne;

@implementation AppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    // Should be set YES only when you have opt-in consent from user 
    [ApsisOneAPI collectDataEnabled:YES];
    return YES;
}

@end
```