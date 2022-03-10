## Installation

### CocoaPods 

[CocoaPods](https://cocoapods.org) is a dependency manager for Cocoa projects. For usage and installation instructions, visit their website. To integrate Alamofire into your Xcode project using CocoaPods, specify it in your `Podfile`:

```ruby
pod 'ApsisOne', '~> 0.8'
```

### Swift Package Manager

The [Swift Package Manager](https://swift.org/package-manager/) is a tool for automating the distribution of Swift code and is integrated into the `swift` compiler. 

To install AppTool package into your packages, add it to the `dependencies` value of your `Package.swift`:

```swift
dependencies: [
    .package(url: "https://github.com/ApsisInternational/apptool-ios-sdk.git", .upToNextMajor(from: "0.8.1"))
]
```

To install AppTool package via Xcode

 * Go to File -> Swift Packages -> Add Package Dependency...
 * Then search for https://github.com/ApsisInternational/apptool-ios-sdk.git
 * And choose the version you want

## Data collection

To start collecting and sending any events like users’ behaviour data, custom events which you implement, location tracking, etc. You should provide data collection consent using [provideConsent:](./Classes/ApsisOneAPI.html#/c:objc(cs)ApsisOneAPI(cm)provideConsent:) method

Objective-C
```objc
[ApsisOneAPI provideConsent:ONEConsentTypeCollectData];
```
Swift
```Swift
ApsisOneAPI.provide(.collectData)
```

## Location collection

To track user’s location data:

- Add description of location collection in Info.plist file


```xml
    <key>NSLocationAlwaysAndWhenInUseUsageDescription</key>
    <string>Track Your location to improve something</string>
    <key>NSLocationWhenInUseUsageDescription</key>
    <string>Track Your location to improve something</string>
```
- Your app should request user’s authorization to use location services using ordinary CLLocationManager API (Preferred to use requestAlwaysAuthorization in case to collect location data in background): 

Objective-C
```objc
[CLLocationManager.new requestAlwaysAuthorization];
```
Swift
```Swift
CLLocationManager().requestAlwaysAuthorization()
```

- In addition to data collection consent, you should provide location collection consent using [provideConsent:](./Classes/ApsisOneAPI.html#/c:objc(cs)ApsisOneAPI(cm)provideConsent:) method

Objective-C
```objc
[ApsisOneAPI provideConsent:ONEConsentTypeCollectLocation];
```
Swift
```Swift
ApsisOneAPI.provide(.collectLocation)
```

To let framework collecting location in background, even application was closed, add location to allowed background modes in Info.plist
```xml
	<key>UIBackgroundModes</key>
	<array>
		<string>location</string>
	</array>
```
or Target -> Signing & Capabilities -> Background modes -> Location updates

## Documentation

Documentation for the project can be found [here](https://docs.ws.apsis.one/ios/index.html)