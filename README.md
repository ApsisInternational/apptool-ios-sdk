## Installation

### CocoaPods

To integrate AppTool into your Xcode project using CocoaPods, specify it in your `Podfile`:

```ruby
pod 'ApsisOne', '~> 0.7'
```

### Swift Package Manager

Once you have your Swift package set up, add AppTool to the `dependencies` value of your `Package.swift`.

```swift
dependencies: [
    .package(url: "https://github.com/ApsisInternational/apptool-ios-sdk.git")
]
```

### Manual
Import ApsisOne.xcframework file into your project or just drag-and-drop it.


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