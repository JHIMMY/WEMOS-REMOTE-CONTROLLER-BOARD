/*
 * Utility functions to help debugging running code.
 */

#ifndef DEBUGUTILS_H
#define DEBUGUTILS_H

#ifdef DEBUG
#define DEBUG_PRINT(str)        \
    Serial.print(millis());     \  
    Serial.print(" Line ");     \  
    Serial.print(__LINE__);     \
    Serial.print(":");          \
    Serial.print(' ');          \
    Serial.println(str);
#else
#define DEBUG_PRINT(str)
#endif

#endif



// Full debug definition
//
// #define DEBUG_PRINT(str)        \
//     Serial.print(millis());     \
//     Serial.print(": ");         \
//     Serial.print(__PRETTY_FUNCTION__); \
//     Serial.print(' ');          \
//     Serial.print(__FILE__);     \
//     Serial.print(':');          \
//     Serial.print(__LINE__);     \
//     Serial.print(' ');          \
//     Serial.println(str);