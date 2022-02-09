//
//  ONEPlacemark.h
//  ApsisOne
//
//  Created by Daniil Alferov on 11.01.2022.
//  Copyright © 2022 APSIS International AB. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 ONEPlacemark. Used for manual track location with defined placemark name and address.
 */

@interface ONEPlacemark : NSObject

/// :nodoc:
@property (strong, nonatomic, readonly) NSString *name;
/// :nodoc:
@property (strong, nonatomic, readonly) NSString *address;

/// :nodoc:
- (instancetype)init NS_UNAVAILABLE;
/// :nodoc:
+ (instancetype)new NS_UNAVAILABLE;

/**
 Creates an instance of `ONEPlacemark`.
 @param name Name of placemark
 @param address Address of placemark
 */
+ (instancetype _Nullable)placemarkWithName:(NSString * _Nullable)name
                                    address:(NSString * _Nullable)address;

@end

NS_ASSUME_NONNULL_END
