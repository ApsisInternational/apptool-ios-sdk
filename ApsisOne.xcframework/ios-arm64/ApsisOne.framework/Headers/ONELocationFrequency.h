//
//  ONELocationFrequency.h
//  ApsisOne
//
//  Created by Daniil Alferov on 24.12.2021.
//  Copyright © 2021 APSIS International AB. All rights reserved.
//

#ifndef ONELocationFrequency_h
#define ONELocationFrequency_h

/**
 Collecting location frequency types
 */
typedef NS_ENUM(NSUInteger, ONELocationFrequency) {
    /**
     Collect user location using only Significant-change location service (works with all application states: from terminated to active)
     */
    ONELocationFrequencyLow = 1,

    /**
     Collect user location using Visits and Significant-change location service (works with all application states: from terminated to active)
     */
    ONELocationFrequencyMedium = 2,

    /**
     Collect user location using Visits and Significant-change location service (works with all application states: from terminated to active) and Standard location service (works only when app is in active state) with 50 meters distance filter
     */
    ONELocationFrequencyHigh = 3,
};

#endif /* ONELocationFrequency_h */
