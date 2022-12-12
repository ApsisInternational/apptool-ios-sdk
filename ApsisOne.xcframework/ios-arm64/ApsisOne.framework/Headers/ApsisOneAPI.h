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
#import <ApsisOne/ONEPlacemark.h>
#import <ApsisOne/ONELocationFrequency.h>
#import <UIKit/UIView.h>

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
 * Sets minimum log level. (default: ONELogLevelNone)
 * Available levels: ONELogLevelNone, ONELogLevelError, ONELogLevelWarning, ONELogLevelInfo.
 * Each subsequent level contains previous log event. E.g. ONELogLevelError contains only Error log events,
 * and ONELogLevelInfo contains Error, Warnings and Info log events.
 *
 * @param logLevel ONELogLevel type
 */
+ (void)setMinimumLogLevel:(ONELogLevel)logLevel;

/**
 *  Add location event
 *
 *  @param latitude location latitude
 *  @param longitude location latitude
*/
+ (void)trackLocationWithLatitude:(double)latitude
                        longitude:(double)longitude;

/**
 *  Add location event
 *
 *  @param latitude location latitude
 *  @param longitude location latitude
 *  @param placemark placemark you want to associate with location
*/
+ (void)trackLocationWithLatitude:(double)latitude
                        longitude:(double)longitude
                        placemark:(ONEPlacemark * _Nullable)placemark;

/**
 *  Add location event
 *
 *  @param latitude location latitude
 *  @param longitude location latitude
 *  @param placemark placemark you want to associate with location
 *  @param horizontalAccuracy The horizontal accuracy (in meters) of the specified coordinate
*/
+ (void)trackLocationWithLatitude:(double)latitude
                        longitude:(double)longitude
                        placemark:(ONEPlacemark * _Nullable)placemark
               horizontalAccuracy:(NSUInteger)horizontalAccuracy;

/**
 *  Start collecting location with frrquency
 *
 *  @param frequency ONELocationFrequency type
*/
+ (void)startCollectingLocation:(ONELocationFrequency)frequency;

/**
 *  Stop collecting location
*/
+ (void)stopCollectingLocation;

/**
 * Synchronously makes a proxy view, which will load contextual message by provided discriminator
 *
 * @param messageId The discriminator of desired contextual message view.
 * @return  returns the placeholder view which will try to load the contextual message.
*/
+ (UIView *)contextualMessageViewWithId:(NSString *)messageId;

/**
 * Asynchronously load contextual message by provided discriminator
 *
 * @param messageId The discriminator of desired contextual message view.
 * @param onFinishHandler A block object to be executed when view building finished. This block takes a single UIView argument that contains contextual message view. This parameter may be NULL.
*/
+ (void)loadContextualMessageViewWithId:(NSString *)messageId
                               onFinish:(void(^)(UIView * _Nullable))onFinishHandler;

/**
 * Updates push notifications token
 *
 * @param token Push token.
*/
+ (void)updatePushToken:(NSString *)token;

/**
 * Provide consent topics for push notifications
 *
 * @param topics array of consent topics.
 */
+ (void)subscribePushNotificationTopics:(NSArray<NSString *> *)topics;

/**
 * Remove consent topics for push notifications
 *
 * @param topics array of consent topics.
 */
+ (void)unsubscribePushNotificationTopics:(NSArray<NSString *> *)topics;

@end

NS_ASSUME_NONNULL_END
