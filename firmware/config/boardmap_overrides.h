#ifndef BOADMAP_OVERRIDES_H
#define BOADMAP_OVERRIDES_H
#ifdef __cplusplus
extern "C"
{
#endif

#include "boardmap_reset.h"
#define MCU MCU_AVR
#define KINEMATIC KINEMATIC_COREXY
#define AXIS_COUNT 2
#define TOOL_COUNT 1
#define BAUDRATE 115200
#define BOARD BOARD_UNO_SHIELD_V3
#define BOARD_NAME "plotosaurus"
#define UART_PORT 0
#define UART2_PORT 0
#define ITP_TIMER 1
#define RTC_TIMER 0
#define SERVO_TIMER 3
#define ONESHOT_TIMER 2
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
#define PWM0_BIT 3
#define PWM0_PORT B
#define PWM0_CHANNEL A
#define PWM0_TIMER 2
#define DOUT0_BIT 5
#define DOUT0_PORT B
#define DOUT1_BIT 4
#define DOUT1_PORT B
#define DOUT2_BIT 3
#define DOUT2_PORT C
#define LIMIT_X_BIT 1
#define LIMIT_X_PORT B
#define LIMIT_X_ISR 0
#define LIMIT_Y_BIT 2
#define LIMIT_Y_PORT B
#define LIMIT_Y_ISR 0
#define LIMIT_Z_BIT 3
#define LIMIT_Z_PORT B
#define LIMIT_Z_ISR 0
#define PROBE_BIT 5
#define PROBE_PORT C
#define PROBE_ISR 1
#define ESTOP_BIT 0
#define ESTOP_PORT C
#define ESTOP_ISR 1
#define FHOLD_BIT 1
#define FHOLD_PORT C
#define FHOLD_ISR 1
#define CS_RES_BIT 2
#define CS_RES_PORT C
#define CS_RES_ISR 1
#define TX_BIT 1
#define TX_PORT D
#define RX_BIT 0
#define RX_PORT D
#define IC74HC595_COUNT 0
//Custom configurations
#define PCINT0_PORT B
#define PCINT1_PORT C
#define PCINT2_PORT D
#define PLANNER_BUFFER_SIZE 14
#undef STEP_ISR_SKIP_MAIN
#undef STEP_ISR_SKIP_IDLE
#define USE_MACRO_BUFFER

#ifdef __cplusplus
}
#endif
#endif
