#ifndef BOADMAP_OVERRIDES_H
#define BOADMAP_OVERRIDES_H
#ifdef __cplusplus
extern "C"
{
#endif

#define BOARD_NAME "plotosaurus"

#define MCU MCU_AVR

#define KINEMATIC KINEMATIC_COREXY
#define AXIS_COUNT 2

#define TOOL_COUNT 1

#define BAUDRATE 115200
#define BOARD BOARD_UNO_SHIELD_V3

#define STEP0_BIT 5
#define STEP0_PORT D

#define STEP1_BIT 6
#define STEP1_PORT D

#define STEP2_BIT 7
#define STEP2_PORT D

#define DIR0_BIT 2
#define DIR0_PORT D

#define DIR1_BIT 3
#define DIR1_PORT D

#define DIR2_BIT 4
#define DIR2_PORT D

#define STEP0_EN_BIT 0
#define STEP0_EN_PORT B

#define SERVO0_BIT 4
#define SERVO0_PORT C

#define SERVO_TIMER 2

#ifdef __cplusplus
}
#endif
#endif
