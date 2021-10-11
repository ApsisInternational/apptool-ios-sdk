//
//  ONEScreenViewEvent.h
//  ApsisOne
//
//  Created by Daniil Alferov on 26.04.2021.
//  Copyright © 2021 APSIS International AB. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 Screen View event. This event signifies a screen view. This event logs automatically when data collection enabled.Use this when a screen transition occurs. It used for manual track screen events in case of SwiftUI layouting.
 */

@interface ONEScreenViewEvent : NSObject

/// :nodoc:
@property (strong, nonatomic, readonly) NSString *viewName;
/// :nodoc:
@property (strong, nonatomic, readonly) NSString *className;

/// :nodoc:
- (instancetype)init NS_UNAVAILABLE;
/// :nodoc:
+ (instancetype)new NS_UNAVAILABLE;

/**
 Creates an instance of `ONEScreenViewEvent`.
 @param viewName Title of screen
 @param className Class name of a screen
 */
+ (instancetype)eventWithViewName:(NSString *)viewName
                        className:(NSString *)className;

@end

NS_ASSUME_NONNULL_END
