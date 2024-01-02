#ifndef _CONFIG_H_
#define _CONFIG_H_

#include <Arduino.h>

/*
*****************************************************************************************
* FEATURES
*****************************************************************************************
*/
#define CONFIG_BODY_SPOTMICRO       1
#define CONFIG_BODY_KANGAL          2
#ifndef CONFIG_BODY
#define CONFIG_BODY                 CONFIG_BODY_SPOTMICRO
#endif

#define CONFIG_CONTROL_BTPADS       1
#define CONFIG_CONTROL_BT_UART      2
#define CONFIG_CONTROL              CONFIG_CONTROL_BTPADS

#define CONFIG_ENABLE_GYRO          1
#define CONFIG_ENABLE_CAM_PAN_TILT  1

/*
*****************************************************************************************
* CONSTANTS
*****************************************************************************************
*/
#define UNIT_MM                     1.0f    // (unit:mm)
#define PRECISION                   0.1f    // (unit:mm)
#define MOTION_SMOOTH_GAIN          0.9f

#define BODY_NUM_LEGS               4
#define BODY_NUM_JOINTS             3

#if (CONFIG_BODY == CONFIG_BODY_SPOTMICRO)
//    #define BODY_WIDTH              110     // (unit:mm)
//    #define BODY_HEIGHT             300     // (unit:mm)
//    #define BODY_COXA_OFFSET_Z      1       // (unit:mm)
//    #define BODY_COXA_LENGTH        60      // (unit:mm)
//    #define BODY_FEMUR_LENGTH       115     // (unit:mm)
//    #define BODY_TIBIA_LENGTH       135     // (unit:mm)
//    #define BODY_MIN_Z             -70
//    #define BODY_MAX_Z              70
//    #define BODY_IDLE_Z            -120     // (unit:mm)
//
//    #define SERVER_NAME             "SpotMicro"
//    #define FILE_SERVO_CFG          "/smoffs.cfg"
//    #define FILE_STEP_CFG           "/smstep.cfg"
//    #define FILE_GYRO_CFG           "/smgyro.cfg"
    #define BODY_WIDTH              95      // (unit:mm)
    #define BODY_HEIGHT             200     // (unit:mm)
    #define BODY_COXA_OFFSET_Z      0       // (unit:mm)
    #define BODY_COXA_LENGTH        40      // (unit:mm)
    #define BODY_FEMUR_LENGTH       100     // (unit:mm)
    #define BODY_TIBIA_LENGTH       115     // (unit:mm)
    #define BODY_MIN_Z             -45
    #define BODY_MAX_Z              45
    #define BODY_IDLE_Z            -45      // (unit:mm)
//

//
    #define SERVER_NAME             "Kangal"
    #define FILE_SERVO_CFG          "/kaoffs.cfg"
    #define FILE_STEP_CFG           "/kastep.cfg"
    #define FILE_GYRO_CFG           "/kagyro.cfg"
#elif (CONFIG_BODY == CONFIG_BODY_KANGAL)
    #define BODY_WIDTH              95      // (unit:mm)
    #define BODY_HEIGHT             200     // (unit:mm)
    #define BODY_COXA_OFFSET_Z      0       // (unit:mm)
    #define BODY_COXA_LENGTH        40      // (unit:mm)
    #define BODY_FEMUR_LENGTH       100     // (unit:mm)
    #define BODY_TIBIA_LENGTH       115     // (unit:mm)
    #define BODY_MIN_Z             -45
    #define BODY_MAX_Z              45
    #define BODY_IDLE_Z            -45      // (unit:mm)

    #define SERVER_NAME             "Kangal"
    #define FILE_SERVO_CFG          "/kaoffs.cfg"
    #define FILE_STEP_CFG           "/kastep.cfg"
    #define FILE_GYRO_CFG           "/kagyro.cfg"
#endif

#define BODY_MAX_YAW                30.0f   // (unit:degree)
#define BODY_MAX_PITCH              30.0f   // (unit:degree)
#define BODY_MAX_ROLL               30.0f   // (unit:degree)
#define BODY_MAX_MOVE_MULT          3.0f

#define WIFI_SSID                   "yourssid"
#define WIFI_PASSWORD               "yourpass"

/*
*****************************************************************************************
* H/W CONSTANTS (PINS)
*****************************************************************************************
*/
#if (CONFIG_BODY == CONFIG_BODY_SPOTMICRO)
// Motor Front Right
#define IN_11  16 // L298N #2 in 1 motor Front left
#define IN_12  4 // L298N #2 in 2 motor Front left
#define ENA_m1  0 // Enable/speed motor Front left

// Motor back Right
#define IN_13  23 // L298N #2 in 1 motor front right
#define IN_14  18 // L298N #2 in 2 motor front right
#define ENB_m1  19 // Enable/speed motor front right

//// Motor Front left
#define IN_21  26 // L298N #2 in 1 motor back Left
#define IN_22  27 // L298N #2 in 2 motor back Left
#define ENA_m2  25 // Enable/speed motor back Left
//
//// Motor back left
#define IN_23  14 // L298N #2 in 1 motor back right
#define IN_24  12 // L298N #2 in 2 motor back right
#define ENB_m2  13 // Enable/speed motor back right

  
#define freqq  30000
#define pwmChannel  0

#define resolutionn  8
#define dutyCycle  250

    #define PIN_SCL0                22
    #define PIN_SDA0                21

    #define PIN_LED_STRIP           15
    #define PIN_PWR_LED             2

    #define PIN_PWR_ADC             A0
    #define PIN_CAL_SW              32
#elif (CONFIG_BODY == CONFIG_BODY_KANGAL)
    #define PIN_SCL0                22
    #define PIN_SDA0                21

    #define PIN_LED_STRIP           15
    #define PIN_PWR_LED             2

    #define PIN_PWR_ADC             A0
    #define PIN_CAL_SW              32
#endif

#define PIN_LED                     5

// UART2
#define PIN_RXD2                    32
#define PIN_TXD2                    33      // 12 should be LOW during boot so TXD2 is changed to 14

// ADC
#define PIN_AMP                     A3

// H/W CONFIGURATION
#define HW_SERVO_UPDATE_FREQ        100

/*
*****************************************************************************************
* MACROS & STRUCTURES
*****************************************************************************************
*/
/*
    Z      TOP VIEW
               | -Y
               |
          ---------
          | 2     3 |               H
-X -------|    +    |-------- +X    E
          | 1     0 |               A
          ---------                 D
               |
               |
               | +Y
*/
#define IS_FRONT_LEG(leg)       (leg == 0 || leg == 3)
#define IS_RIGHT_LEG(leg)       (leg < 2)

#endif
