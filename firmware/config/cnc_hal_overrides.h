#ifndef CNC_HAL_OVERRIDES_H
#define CNC_HAL_OVERRIDES_H
#ifdef __cplusplus
extern "C"
{
#endif

#include "cnc_hal_reset.h"
#define S_CURVE_ACCELERATION_LEVEL 0
#define DISABLE_ALL_CONTROLS
#define DISABLE_ALL_LIMITS
#define DISABLE_PROBE
#define TOOL1 pen_servo
#define PEN_SERVO SERVO0
#define PEN_SERVO_LOW 50
#define PEN_SERVO_MID 127
#define PEN_SERVO_HIGH 255
#define ENCODERS 0
//Custom configurations
// disable some features to make the code smaller
#define DISABLE_SETTINGS_MODULES
#define DISABLE_MULTISTREAM_SERIAL
#define DISABLE_RTC_CODE

#ifdef __cplusplus
}
#endif
#endif
