//
//  ONELogLevel.h
//  ApsisOne
//
//  Created by Daniil Alferov on 11.05.2021.
//  Copyright © 2021 APSIS International AB. All rights reserved.
//

#ifndef ONELogLevel_h
#define ONELogLevel_h

/**
 Internal logging levels.
 */
typedef NS_ENUM(NSUInteger, ONELogLevel) {
    /**
     Information log events.
     */
    ONELogLevelInfo = 1,

    /**
     Warning log events.
     */
    ONELogLevelWarning = 2,

    /**
     Error log events.
     */
    ONELogLevelError = 3,

    /**
     No log events.
     */
    ONELogLevelNone = 10
};

#endif /* ONELogLevel_h */
