//
//  ApsisOneAPI.h
//  ApsisOne
//
//  Created by Fedor Pudeyan on 2018-12-20.
//  Copyright © 2018 APSIS International AB. All rights reserved.
//

#import <ApsisOne/ONEScreenViewEvent.h>
#import <ApsisOne/ONECustomEvent.h>
#import <ApsisOne/ONELogLevel.h>
#import <ApsisOne/ONEConsentType.h>

NS_ASSUME_NONNULL_BEGIN

/**
 `ApsisOneAPI` the entry point of App Tool SDKs.
 */

@interface ApsisOneAPI : NSObject

/**
 *  Provide consent with type
 *
 *  @param consentType ONEConsentType
 */
+ (void)provideConsent:(ONEConsentType)consentType;

/**
 *  Remove consent with type
 *
 *  @param consentType ONEConsentType
 */
+ (void)removeConsent:(ONEConsentType)consentType;

/**
 *  Subscribe to event when consent lost
 *
 *  @param handler block to handle consent lost
 */
+ (void)subscribeOnConsentLost:(void(^)(ONEConsentType))handler;

/**
 *  Add "view appear" event
 *
 *  @param event ONEScreenViewEvent object to store and send by SDK
 */
+ (void)trackScreenViewEvent:(ONEScreenViewEvent *)event;

/**
 *  Add custom event
 *
 *  @param event ONECustomEvent object to store and send by SDK
 */
+ (void)trackCustomEvent:(ONECustomEvent *)event;

/**
 *
 * Sets minimum log level. (default: ONELogLevelNone)
 * Available levels: ONELogLevelNone, ONELogLevelError, ONELogLevelWarning, ONELogLevelInfo.
 * Each subsequent level contains previous log event. E.g. ONELogLevelError contains only Error log events,
 * and ONELogLevelInfo contains Error, Warnings and Info log events.
 *
 * @param logLevel ONELogLevel type
 */
+ (void)setMinimumLogLevel:(ONELogLevel)logLevel;

@end

NS_ASSUME_NONNULL_END
