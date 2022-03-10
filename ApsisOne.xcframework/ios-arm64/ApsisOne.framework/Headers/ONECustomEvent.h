//
//  ONECustomEvent.h
//  ApsisOne
//
//  Created by Daniil Alferov on 08.11.2021.
//  Copyright © 2021 APSIS International AB. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 Custom event. It used for manual track any custom event which have been already defined in ApsisOne account.
 */

@interface ONECustomEvent : NSObject

/// :nodoc:
@property (strong, nonatomic, readonly) NSString *eventId;
/// :nodoc:
@property (strong, nonatomic, readonly) NSDictionary<NSString *, NSString *> *eventData;

/// :nodoc:
- (instancetype)init NS_UNAVAILABLE;
/// :nodoc:
+ (instancetype)new NS_UNAVAILABLE;

/**
 Creates an instance of `ONECustomEvent`.
 @param eventId Custom Event Id
 @param eventData Dictionary with data required for event
 */
+ (instancetype)eventWithId:(NSString *)eventId
                       data:(NSDictionary *)eventData;

@end

NS_ASSUME_NONNULL_END
