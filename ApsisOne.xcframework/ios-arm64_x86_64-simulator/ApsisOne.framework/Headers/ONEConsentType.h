//
//  ONEConsentType.h
//  ApsisOne
//
//  Created by Daniil Alferov on 17.12.2021.
//  Copyright © 2021 APSIS International AB. All rights reserved.
//

#ifndef ONEConsentType_h
#define ONEConsentType_h

/**
 Consent types
 */
typedef NS_ENUM(NSUInteger, ONEConsentType) {
    /**
     Collectiing user activity data consent
     */
    ONEConsentTypeCollectData = 1,

    /**
     Collectiing user location data consent
     */
    ONEConsentTypeCollectLocation = 2,

    /**
     Push Notifications consent
     */
    ONEConsentTypePushNotifications = 3,

};

#endif /* ONEConsentType_h */
