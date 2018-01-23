# Amp-iOS
<sup>by Scaled Inference</sup>

iOS client for Amp.ai. The iOS client supports both Objective-C and Swift projects that are compatible with Swift 3.2 / 4 and iOS 10 and above.

## Overview
The documentation to follow for the Amp-iOS client augments the documentation of the [Amp-Swift client](https://github.com/ScaledInference/Amp-Swift-SDK.git).  Please refer there for core functionality.  Amp-iOS extends the Amp-Swift client by providing built-in events, auto-session creation and convenience `observe` and `decide` event calls from the `amp` instance rather than the `session` instance.

## CocoaPods
### Install Cocoapods
``` Swift
$ gem install cocoapods 
```
### Initialize Cocoapods in your project
```
$ pod init
```

### Add the Amp/AmpiOS pods under the target section of your newly generated Podfile
``` Ruby
platform :ios, '10.0'
use_frameworks!

target '<Your Target Name>' do
    pod 'AmpiOS'
end
```
You can use a specific version of `Amp`, by specifying the version:
``` Ruby
pod 'AmpiOS', '~> 1.0'
```

### Install the Amp/AmpiOS pods
``` Ruby
$ pod install
```
To upgrade to the latest version of `AmpiOS` in the future, run:
``` Ruby
$ pod update
```
After installing the pods, Xcode will prompt you to reopen the project using the workspace file.

## AmpiOS

### Initialization
Initializing the Amp-iOS client is similar to the Amp-Swift client but simpler as you don't have to initialize the session instance.  Here is an example of initializing Amp in your `AppDelegate`:

>Swift
``` Swift
import UIKit
import AmpiOS

@UIApplicationMain
class AppDelegate: UIResponder, UIApplicationDelegate {
    
    var window: UIWindow?
    static var amp: Amp!
    
    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplicationLaunchOptionsKey: Any]?) -> Bool {
        AppDelegate.amp = Amp(key: "<your_project_key>")

        return true
    }
    ...
    func applicationDidEnterBackground(_ application: UIApplication) {
        AppDelegate.amp = nil
    }
    
    func applicationWillEnterForeground(_ application: UIApplication) {
        AppDelegate.amp = Amp(key: "<your_project_key>")
    }
}
```

>Objective-C
``` ObjectiveC
#import "AppDelegate.h"
@import AmpiOS;

@implementation AppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    _amp = [[Amp alloc] initWithKey:@"<your_project_key>" userId:<userId> config:<Config>];
    
    return YES;
}

- (void)applicationDidEnterBackground:(UIApplication *)application {
    _amp = nil;
}

- (void)applicationWillEnterForeground:(UIApplication *)application {
    _amp = [[Amp alloc] initWithKey:@"<your_project_key>" userId:<userId> config:<Config>];
}
```

In the above example, we make the assumption that an user session is from when they open the app until the app enters the background.  How you define an user session is completely up to you.  It may be that you define it by the time they enter the application to 30 minutes.

### Observe
Making `observe` requests can be called directly from your Amp instance with the Amp-iOS client.
>Swift
``` Swift
amp.observe("Signup", ["lang": "en", "timeOfDay": "evening"])
```

>Objective-C
```ObjectiveC
[_amp observeWithName:@"Signup" properties:@{@"lang": @"en", @"timeOfDay": @"evening"}];
```

### Decide
And it is no different with your `decide` requests.

>Swift
``` Swift
let colorDecision = amp.decide("ButtonColor", ["color":["blue", "orange", "green"]])
```

>Objective-C
``` ObjectiveC
NSDictionary* decision = [_amp decideWithName:@"ButtonStyle" candidates:@{@"color": @[@"orange", @"blue", @"green"]} ttl:nil];
```

### Builtin Events
By default, when using the Amp-iOS client, we will observe taps through the `AmpTap` event on buttons and general session information on the `AmpSession` event. 

## Usage
There are many ways in which you will want to use Amp.  You may want to track how often each page is typically visited in your application or how far down a scrollable page your user scrolls.  If your application requires sign up and registration, you may want to track the number of taps on the sign up button because you may want to increase your user's sign up rate using Amp.  The possibilities are endless, and with Amp, not only will it track whatever you ask of it, it will also check the context in which these events occurred.  With this information, Amp will make the best decisions to improve on whatever business goals you have.
Below are just a few examples on how you might make `observe` and `decide` requests in your application.

### Observe Usages
#### I want to track the pages that are visited
This is one use of the iOS lifecycle methods, `viewDidLoad`.

>Swift
``` Swift
override func viewDidLoad() {
    super.viewDidLoad()

    if let title = self.navigationItem.title {
        amp?.observe(name: "AmpPage", properties: ["title": title])
    }
}
```

>Objective-C
```ObjectiveC
- (void)viewDidLoad {
    [super viewDidLoad];
    
    NSString* title = [[self navigationItem] title];
    if (title) {
        [_amp observeWithName:@"AmpPage" properties:@{@"title": title}];
    }
}
```

#### I want to track button taps
Amp already tracks these for you through one of our built-in events, `AmpTap`.  You just use these or you can create customized ones as well through an action method.

>Swift
``` Swift
@IBAction func buttonPressed(_ sender: UIButton) {
    amp?.observe(name: "Signup", properties: [:])
}
```

>Objective-C
```ObjectiveC
- (IBAction)buttonPressed:(UIButton *)sender {
    [_amp observeWithName:@"Signup" properties:@{}];
}
```

#### I want to track what people are searching for
Use a delegate method to help you here.

>Swift
``` Swift
// MARK: - UISearchBarDelegate methods

func searchBarTextDidEndEditing(_ searchBar: UISearchBar) {
    if let textValue = searchBar.text {
        amp?.observe(name: "Search", properties: ["value": textValue])
    }
}
```

>Objective-C
```ObjectiveC
-(void)searchBarTextDidEndEditing:(UISearchBar *)searchBar {
    NSString* textValue = [searchBar text];
    if (textValue) {
        [_amp observeWithName:@"Search" properties:@{@"value": textValue}];
    }
}
```

#### I want to track how much my users scroll on the page
The following example only observes scrolling if greater than 100 using the UITableViewDelegate.

>Swift
``` Swift
// MARK: - UITableViewDelegate methods

func scrollViewWillEndDragging(_ scrollView: UIScrollView, withVelocity velocity: CGPoint, targetContentOffset: UnsafeMutablePointer<CGPoint>) {
    if targetContentOffset.pointee.y > 100 {
        amp?.observe(name: "PageScroll", properties: ["page":"Welcome"])
    }
}
```

>Objective-C
```ObjectiveC
- (void)scrollViewWillEndDragging:(UIScrollView *)scrollView withVelocity:(CGPoint)velocity targetContentOffset:(inout CGPoint *)targetContentOffset {

    if (targetContentOffset->y > 100) {
        [_amp observeWithName:@"AmpScrollDrag" properties:@{}];
    }
}
```


### Decide Usages

#### I want to update the style of a control in my view

>Swift
``` Swift
override func viewWillAppear(_ animated: Bool) {
    super.viewWillAppear(animated)

    let decision = amp.decide(name: "ButtonStyle", candidates: ["color": ["orange", "blue", "green"]])
    
    let colors = ["orange": UIColor.orange, "blue": UIColor.blue, "green": UIColor.green]
    pressMeBtn.setTitleColor(colors[decision["color"] as! String], for: .normal)
}
```

>Objective-C
```ObjectiveC
- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    
    NSDictionary* decision = [_amp decideWithName:@"ButtonStyle" candidates:@{@"color": @[@"orange", @"blue", @"green"]} ttl:nil];
    
    NSDictionary* colors = @{@"orange": [UIColor orangeColor], @"blue": [UIColor blueColor], @"green": [UIColor greenColor]};
    
    [_pressMeBtn setTitleColor:[colors objectForKey:[decision objectForKey:@"color"]] forState:UIControlStateNormal];
}
```

#### I want to determine which segue to perform
You may want to determine whether creating a New Features wizard is really helpful or if your users are just skipping it.  Maybe you are trying to decide the flow of a sequence of pages.  Whatever your use case you can apply decision-making to determine which viewController to navigate to next.  Below is a simple example of deciding which segue to use when the orientation changes.

> Swift
``` Swift
NotificationCenter.default.addObserver(self, selector: #selector(ViewController.orientationChanged), name: NSNotification.Name.UIApplicationDidChangeStatusBarOrientation, object: nil)
...
@objc func orientationChanged(notification: Notification) {
    let deviceOrientation = UIDevice.current.orientation
    let decision = amp.decide("LandscapeView", ["view": ["SplitLeft", "Normal", "SplitRight"]])

    if UIDeviceOrientationIsLandscape(deviceOrientation) {
        self.performSegue(withIdentifier: "decision["view"] as! String, sender: self)
    }
}
```

>Objective-C
```ObjectiveC
[NSNotificationCenter.defaultCenter addObserver:self selector:@selector(orientationChanged:) name:@"UIApplicationDidChangeStatusBarOrientationNotification" object:NULL];
...
- (void)orientationChanged:(NSNotification *) sender {                        }
    UIDeviceOrientation deviceOrientation = [UIDevice currentDevice].orientation;
    NSDictionary* decision = [_amp decideWithName:@"LandscapeView" candidates:@{@"view": @[@"SplitLeft", @"Normal", @"SplitRight"]} ttl:nil];
    
    if (UIDeviceOrientationIsLandscape(deviceOrientation)) {
        [self performSegueWithIdentifier:[NSString stringWithFormat:@"%@", [decision objectForKey:@"view"]] sender:self];
    }
}
```
