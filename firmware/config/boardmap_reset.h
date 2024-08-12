#ifndef BOADMAP_RESET_H
#define BOADMAP_RESET_H
#ifdef __cplusplus
extern "C"
{
#endif

#undef MCU
#undef KINEMATIC
#undef AXIS_COUNT
#undef TOOL_COUNT
#undef BAUDRATE
#undef ENABLE_WIFI
#undef ENABLE_BLUETOOTH
#undef BOARD
#undef BOARD_NAME
#undef UART_PORT
#undef UART2_PORT
#undef SPI_PORT
#undef I2C_PORT
#undef ITP_TIMER
#undef RTC_TIMER
#undef SERVO_TIMER
#undef ONESHOT_TIMER
#undef STEP0_BIT
#undef STEP0_PORT
#undef STEP0_IO_OFFSET
#undef STEP1_BIT
#undef STEP1_PORT
#undef STEP1_IO_OFFSET
#undef STEP2_BIT
#undef STEP2_PORT
#undef STEP2_IO_OFFSET
#undef STEP3_BIT
#undef STEP3_PORT
#undef STEP3_IO_OFFSET
#undef STEP4_BIT
#undef STEP4_PORT
#undef STEP4_IO_OFFSET
#undef STEP5_BIT
#undef STEP5_PORT
#undef STEP5_IO_OFFSET
#undef STEP6_BIT
#undef STEP6_PORT
#undef STEP6_IO_OFFSET
#undef STEP7_BIT
#undef STEP7_PORT
#undef STEP7_IO_OFFSET
#undef DIR0_BIT
#undef DIR0_PORT
#undef DIR0_IO_OFFSET
#undef DIR1_BIT
#undef DIR1_PORT
#undef DIR1_IO_OFFSET
#undef DIR2_BIT
#undef DIR2_PORT
#undef DIR2_IO_OFFSET
#undef DIR3_BIT
#undef DIR3_PORT
#undef DIR3_IO_OFFSET
#undef DIR4_BIT
#undef DIR4_PORT
#undef DIR4_IO_OFFSET
#undef DIR5_BIT
#undef DIR5_PORT
#undef DIR5_IO_OFFSET
#undef DIR6_BIT
#undef DIR6_PORT
#undef DIR6_IO_OFFSET
#undef DIR7_BIT
#undef DIR7_PORT
#undef DIR7_IO_OFFSET
#undef STEP0_EN_BIT
#undef STEP0_EN_PORT
#undef STEP0_EN_IO_OFFSET
#undef STEP1_EN_BIT
#undef STEP1_EN_PORT
#undef STEP1_EN_IO_OFFSET
#undef STEP2_EN_BIT
#undef STEP2_EN_PORT
#undef STEP2_EN_IO_OFFSET
#undef STEP3_EN_BIT
#undef STEP3_EN_PORT
#undef STEP3_EN_IO_OFFSET
#undef STEP4_EN_BIT
#undef STEP4_EN_PORT
#undef STEP4_EN_IO_OFFSET
#undef STEP5_EN_BIT
#undef STEP5_EN_PORT
#undef STEP5_EN_IO_OFFSET
#undef STEP6_EN_BIT
#undef STEP6_EN_PORT
#undef STEP6_EN_IO_OFFSET
#undef STEP7_EN_BIT
#undef STEP7_EN_PORT
#undef STEP7_EN_IO_OFFSET
#undef PWM0_BIT
#undef PWM0_PORT
#undef PWM0_CHANNEL
#undef PWM0_TIMER
#undef PWM0_MUX
#undef PWM0_IO_OFFSET
#undef PWM1_BIT
#undef PWM1_PORT
#undef PWM1_CHANNEL
#undef PWM1_TIMER
#undef PWM1_MUX
#undef PWM1_IO_OFFSET
#undef PWM2_BIT
#undef PWM2_PORT
#undef PWM2_CHANNEL
#undef PWM2_TIMER
#undef PWM2_MUX
#undef PWM2_IO_OFFSET
#undef PWM3_BIT
#undef PWM3_PORT
#undef PWM3_CHANNEL
#undef PWM3_TIMER
#undef PWM3_MUX
#undef PWM3_IO_OFFSET
#undef PWM4_BIT
#undef PWM4_PORT
#undef PWM4_CHANNEL
#undef PWM4_TIMER
#undef PWM4_MUX
#undef PWM4_IO_OFFSET
#undef PWM5_BIT
#undef PWM5_PORT
#undef PWM5_CHANNEL
#undef PWM5_TIMER
#undef PWM5_MUX
#undef PWM5_IO_OFFSET
#undef PWM6_BIT
#undef PWM6_PORT
#undef PWM6_CHANNEL
#undef PWM6_TIMER
#undef PWM6_MUX
#undef PWM6_IO_OFFSET
#undef PWM7_BIT
#undef PWM7_PORT
#undef PWM7_CHANNEL
#undef PWM7_TIMER
#undef PWM7_MUX
#undef PWM7_IO_OFFSET
#undef PWM8_BIT
#undef PWM8_PORT
#undef PWM8_CHANNEL
#undef PWM8_TIMER
#undef PWM8_MUX
#undef PWM8_IO_OFFSET
#undef PWM9_BIT
#undef PWM9_PORT
#undef PWM9_CHANNEL
#undef PWM9_TIMER
#undef PWM9_MUX
#undef PWM9_IO_OFFSET
#undef PWM10_BIT
#undef PWM10_PORT
#undef PWM10_CHANNEL
#undef PWM10_TIMER
#undef PWM10_MUX
#undef PWM10_IO_OFFSET
#undef PWM11_BIT
#undef PWM11_PORT
#undef PWM11_CHANNEL
#undef PWM11_TIMER
#undef PWM11_MUX
#undef PWM11_IO_OFFSET
#undef PWM12_BIT
#undef PWM12_PORT
#undef PWM12_CHANNEL
#undef PWM12_TIMER
#undef PWM12_MUX
#undef PWM12_IO_OFFSET
#undef PWM13_BIT
#undef PWM13_PORT
#undef PWM13_CHANNEL
#undef PWM13_TIMER
#undef PWM13_MUX
#undef PWM13_IO_OFFSET
#undef PWM14_BIT
#undef PWM14_PORT
#undef PWM14_CHANNEL
#undef PWM14_TIMER
#undef PWM14_MUX
#undef PWM14_IO_OFFSET
#undef PWM15_BIT
#undef PWM15_PORT
#undef PWM15_CHANNEL
#undef PWM15_TIMER
#undef PWM15_MUX
#undef PWM15_IO_OFFSET
#undef SERVO0_BIT
#undef SERVO0_PORT
#undef SERVO0_IO_OFFSET
#undef SERVO1_BIT
#undef SERVO1_PORT
#undef SERVO1_IO_OFFSET
#undef SERVO2_BIT
#undef SERVO2_PORT
#undef SERVO2_IO_OFFSET
#undef SERVO3_BIT
#undef SERVO3_PORT
#undef SERVO3_IO_OFFSET
#undef SERVO4_BIT
#undef SERVO4_PORT
#undef SERVO4_IO_OFFSET
#undef SERVO5_BIT
#undef SERVO5_PORT
#undef SERVO5_IO_OFFSET
#undef DOUT0_BIT
#undef DOUT0_PORT
#undef DOUT0_IO_OFFSET
#undef DOUT1_BIT
#undef DOUT1_PORT
#undef DOUT1_IO_OFFSET
#undef DOUT2_BIT
#undef DOUT2_PORT
#undef DOUT2_IO_OFFSET
#undef DOUT3_BIT
#undef DOUT3_PORT
#undef DOUT3_IO_OFFSET
#undef DOUT4_BIT
#undef DOUT4_PORT
#undef DOUT4_IO_OFFSET
#undef DOUT5_BIT
#undef DOUT5_PORT
#undef DOUT5_IO_OFFSET
#undef DOUT6_BIT
#undef DOUT6_PORT
#undef DOUT6_IO_OFFSET
#undef DOUT7_BIT
#undef DOUT7_PORT
#undef DOUT7_IO_OFFSET
#undef DOUT8_BIT
#undef DOUT8_PORT
#undef DOUT8_IO_OFFSET
#undef DOUT9_BIT
#undef DOUT9_PORT
#undef DOUT9_IO_OFFSET
#undef DOUT10_BIT
#undef DOUT10_PORT
#undef DOUT10_IO_OFFSET
#undef DOUT11_BIT
#undef DOUT11_PORT
#undef DOUT11_IO_OFFSET
#undef DOUT12_BIT
#undef DOUT12_PORT
#undef DOUT12_IO_OFFSET
#undef DOUT13_BIT
#undef DOUT13_PORT
#undef DOUT13_IO_OFFSET
#undef DOUT14_BIT
#undef DOUT14_PORT
#undef DOUT14_IO_OFFSET
#undef DOUT15_BIT
#undef DOUT15_PORT
#undef DOUT15_IO_OFFSET
#undef DOUT16_BIT
#undef DOUT16_PORT
#undef DOUT16_IO_OFFSET
#undef DOUT17_BIT
#undef DOUT17_PORT
#undef DOUT17_IO_OFFSET
#undef DOUT18_BIT
#undef DOUT18_PORT
#undef DOUT18_IO_OFFSET
#undef DOUT19_BIT
#undef DOUT19_PORT
#undef DOUT19_IO_OFFSET
#undef DOUT20_BIT
#undef DOUT20_PORT
#undef DOUT20_IO_OFFSET
#undef DOUT21_BIT
#undef DOUT21_PORT
#undef DOUT21_IO_OFFSET
#undef DOUT22_BIT
#undef DOUT22_PORT
#undef DOUT22_IO_OFFSET
#undef DOUT23_BIT
#undef DOUT23_PORT
#undef DOUT23_IO_OFFSET
#undef DOUT24_BIT
#undef DOUT24_PORT
#undef DOUT24_IO_OFFSET
#undef DOUT25_BIT
#undef DOUT25_PORT
#undef DOUT25_IO_OFFSET
#undef DOUT26_BIT
#undef DOUT26_PORT
#undef DOUT26_IO_OFFSET
#undef DOUT27_BIT
#undef DOUT27_PORT
#undef DOUT27_IO_OFFSET
#undef DOUT28_BIT
#undef DOUT28_PORT
#undef DOUT28_IO_OFFSET
#undef DOUT29_BIT
#undef DOUT29_PORT
#undef DOUT29_IO_OFFSET
#undef DOUT30_BIT
#undef DOUT30_PORT
#undef DOUT30_IO_OFFSET
#undef DOUT31_BIT
#undef DOUT31_PORT
#undef DOUT31_IO_OFFSET
#undef DOUT32_BIT
#undef DOUT32_PORT
#undef DOUT32_IO_OFFSET
#undef DOUT33_BIT
#undef DOUT33_PORT
#undef DOUT33_IO_OFFSET
#undef DOUT34_BIT
#undef DOUT34_PORT
#undef DOUT34_IO_OFFSET
#undef DOUT35_BIT
#undef DOUT35_PORT
#undef DOUT35_IO_OFFSET
#undef DOUT36_BIT
#undef DOUT36_PORT
#undef DOUT36_IO_OFFSET
#undef DOUT37_BIT
#undef DOUT37_PORT
#undef DOUT37_IO_OFFSET
#undef DOUT38_BIT
#undef DOUT38_PORT
#undef DOUT38_IO_OFFSET
#undef DOUT39_BIT
#undef DOUT39_PORT
#undef DOUT39_IO_OFFSET
#undef DOUT40_BIT
#undef DOUT40_PORT
#undef DOUT40_IO_OFFSET
#undef DOUT41_BIT
#undef DOUT41_PORT
#undef DOUT41_IO_OFFSET
#undef DOUT42_BIT
#undef DOUT42_PORT
#undef DOUT42_IO_OFFSET
#undef DOUT43_BIT
#undef DOUT43_PORT
#undef DOUT43_IO_OFFSET
#undef DOUT44_BIT
#undef DOUT44_PORT
#undef DOUT44_IO_OFFSET
#undef DOUT45_BIT
#undef DOUT45_PORT
#undef DOUT45_IO_OFFSET
#undef DOUT46_BIT
#undef DOUT46_PORT
#undef DOUT46_IO_OFFSET
#undef DOUT47_BIT
#undef DOUT47_PORT
#undef DOUT47_IO_OFFSET
#undef DOUT48_BIT
#undef DOUT48_PORT
#undef DOUT48_IO_OFFSET
#undef DOUT49_BIT
#undef DOUT49_PORT
#undef DOUT49_IO_OFFSET
#undef LIMIT_X_BIT
#undef LIMIT_X_PORT
#undef LIMIT_X_PULLUP
#undef LIMIT_X_ISR
#undef LIMIT_Y_BIT
#undef LIMIT_Y_PORT
#undef LIMIT_Y_PULLUP
#undef LIMIT_Y_ISR
#undef LIMIT_Z_BIT
#undef LIMIT_Z_PORT
#undef LIMIT_Z_PULLUP
#undef LIMIT_Z_ISR
#undef LIMIT_X2_BIT
#undef LIMIT_X2_PORT
#undef LIMIT_X2_PULLUP
#undef LIMIT_X2_ISR
#undef LIMIT_Y2_BIT
#undef LIMIT_Y2_PORT
#undef LIMIT_Y2_PULLUP
#undef LIMIT_Y2_ISR
#undef LIMIT_Z2_BIT
#undef LIMIT_Z2_PORT
#undef LIMIT_Z2_PULLUP
#undef LIMIT_Z2_ISR
#undef LIMIT_A_BIT
#undef LIMIT_A_PORT
#undef LIMIT_A_PULLUP
#undef LIMIT_A_ISR
#undef LIMIT_B_BIT
#undef LIMIT_B_PORT
#undef LIMIT_B_PULLUP
#undef LIMIT_B_ISR
#undef LIMIT_C_BIT
#undef LIMIT_C_PORT
#undef LIMIT_C_PULLUP
#undef LIMIT_C_ISR
#undef PROBE_BIT
#undef PROBE_PORT
#undef PROBE_PULLUP
#undef PROBE_ISR
#undef ESTOP_BIT
#undef ESTOP_PORT
#undef ESTOP_PULLUP
#undef ESTOP_ISR
#undef SAFETY_DOOR_BIT
#undef SAFETY_DOOR_PORT
#undef SAFETY_DOOR_PULLUP
#undef SAFETY_DOOR_ISR
#undef FHOLD_BIT
#undef FHOLD_PORT
#undef FHOLD_PULLUP
#undef FHOLD_ISR
#undef CS_RES_BIT
#undef CS_RES_PORT
#undef CS_RES_PULLUP
#undef CS_RES_ISR
#undef ANALOG0_BIT
#undef ANALOG0_PORT
#undef ANALOG0_CHANNEL
#undef ANALOG1_BIT
#undef ANALOG1_PORT
#undef ANALOG1_CHANNEL
#undef ANALOG2_BIT
#undef ANALOG2_PORT
#undef ANALOG2_CHANNEL
#undef ANALOG3_BIT
#undef ANALOG3_PORT
#undef ANALOG3_CHANNEL
#undef ANALOG4_BIT
#undef ANALOG4_PORT
#undef ANALOG4_CHANNEL
#undef ANALOG5_BIT
#undef ANALOG5_PORT
#undef ANALOG5_CHANNEL
#undef ANALOG6_BIT
#undef ANALOG6_PORT
#undef ANALOG6_CHANNEL
#undef ANALOG7_BIT
#undef ANALOG7_PORT
#undef ANALOG7_CHANNEL
#undef ANALOG8_BIT
#undef ANALOG8_PORT
#undef ANALOG8_CHANNEL
#undef ANALOG9_BIT
#undef ANALOG9_PORT
#undef ANALOG9_CHANNEL
#undef ANALOG10_BIT
#undef ANALOG10_PORT
#undef ANALOG10_CHANNEL
#undef ANALOG11_BIT
#undef ANALOG11_PORT
#undef ANALOG11_CHANNEL
#undef ANALOG12_BIT
#undef ANALOG12_PORT
#undef ANALOG12_CHANNEL
#undef ANALOG13_BIT
#undef ANALOG13_PORT
#undef ANALOG13_CHANNEL
#undef ANALOG14_BIT
#undef ANALOG14_PORT
#undef ANALOG14_CHANNEL
#undef ANALOG15_BIT
#undef ANALOG15_PORT
#undef ANALOG15_CHANNEL
#undef DIN0_BIT
#undef DIN0_PORT
#undef DIN0_PULLUP
#undef DIN0_ISR
#undef DIN1_BIT
#undef DIN1_PORT
#undef DIN1_PULLUP
#undef DIN1_ISR
#undef DIN2_BIT
#undef DIN2_PORT
#undef DIN2_PULLUP
#undef DIN2_ISR
#undef DIN3_BIT
#undef DIN3_PORT
#undef DIN3_PULLUP
#undef DIN3_ISR
#undef DIN4_BIT
#undef DIN4_PORT
#undef DIN4_PULLUP
#undef DIN4_ISR
#undef DIN5_BIT
#undef DIN5_PORT
#undef DIN5_PULLUP
#undef DIN5_ISR
#undef DIN6_BIT
#undef DIN6_PORT
#undef DIN6_PULLUP
#undef DIN6_ISR
#undef DIN7_BIT
#undef DIN7_PORT
#undef DIN7_PULLUP
#undef DIN7_ISR
#undef DIN8_BIT
#undef DIN8_PORT
#undef DIN8_PULLUP
#undef DIN9_BIT
#undef DIN9_PORT
#undef DIN9_PULLUP
#undef DIN10_BIT
#undef DIN10_PORT
#undef DIN10_PULLUP
#undef DIN11_BIT
#undef DIN11_PORT
#undef DIN11_PULLUP
#undef DIN12_BIT
#undef DIN12_PORT
#undef DIN12_PULLUP
#undef DIN13_BIT
#undef DIN13_PORT
#undef DIN13_PULLUP
#undef DIN14_BIT
#undef DIN14_PORT
#undef DIN14_PULLUP
#undef DIN15_BIT
#undef DIN15_PORT
#undef DIN15_PULLUP
#undef DIN16_BIT
#undef DIN16_PORT
#undef DIN16_PULLUP
#undef DIN17_BIT
#undef DIN17_PORT
#undef DIN17_PULLUP
#undef DIN18_BIT
#undef DIN18_PORT
#undef DIN18_PULLUP
#undef DIN19_BIT
#undef DIN19_PORT
#undef DIN19_PULLUP
#undef DIN20_BIT
#undef DIN20_PORT
#undef DIN20_PULLUP
#undef DIN21_BIT
#undef DIN21_PORT
#undef DIN21_PULLUP
#undef DIN22_BIT
#undef DIN22_PORT
#undef DIN22_PULLUP
#undef DIN23_BIT
#undef DIN23_PORT
#undef DIN23_PULLUP
#undef DIN24_BIT
#undef DIN24_PORT
#undef DIN24_PULLUP
#undef DIN25_BIT
#undef DIN25_PORT
#undef DIN25_PULLUP
#undef DIN26_BIT
#undef DIN26_PORT
#undef DIN26_PULLUP
#undef DIN27_BIT
#undef DIN27_PORT
#undef DIN27_PULLUP
#undef DIN28_BIT
#undef DIN28_PORT
#undef DIN28_PULLUP
#undef DIN29_BIT
#undef DIN29_PORT
#undef DIN29_PULLUP
#undef DIN30_BIT
#undef DIN30_PORT
#undef DIN30_PULLUP
#undef DIN31_BIT
#undef DIN31_PORT
#undef DIN31_PULLUP
#undef DIN32_BIT
#undef DIN32_PORT
#undef DIN32_PULLUP
#undef DIN33_BIT
#undef DIN33_PORT
#undef DIN33_PULLUP
#undef DIN34_BIT
#undef DIN34_PORT
#undef DIN34_PULLUP
#undef DIN35_BIT
#undef DIN35_PORT
#undef DIN35_PULLUP
#undef DIN36_BIT
#undef DIN36_PORT
#undef DIN36_PULLUP
#undef DIN37_BIT
#undef DIN37_PORT
#undef DIN37_PULLUP
#undef DIN38_BIT
#undef DIN38_PORT
#undef DIN38_PULLUP
#undef DIN39_BIT
#undef DIN39_PORT
#undef DIN39_PULLUP
#undef DIN40_BIT
#undef DIN40_PORT
#undef DIN40_PULLUP
#undef DIN41_BIT
#undef DIN41_PORT
#undef DIN41_PULLUP
#undef DIN42_BIT
#undef DIN42_PORT
#undef DIN42_PULLUP
#undef DIN43_BIT
#undef DIN43_PORT
#undef DIN43_PULLUP
#undef DIN44_BIT
#undef DIN44_PORT
#undef DIN44_PULLUP
#undef DIN45_BIT
#undef DIN45_PORT
#undef DIN45_PULLUP
#undef DIN46_BIT
#undef DIN46_PORT
#undef DIN46_PULLUP
#undef DIN47_BIT
#undef DIN47_PORT
#undef DIN47_PULLUP
#undef DIN48_BIT
#undef DIN48_PORT
#undef DIN48_PULLUP
#undef DIN49_BIT
#undef DIN49_PORT
#undef DIN49_PULLUP
#undef TX_BIT
#undef TX_PORT
#undef RX_BIT
#undef RX_PORT
#undef USB_DM_BIT
#undef USB_DM_PORT
#undef USB_DP_BIT
#undef USB_DP_PORT
#undef SPI_CLK_BIT
#undef SPI_CLK_PORT
#undef SPI_SDI_BIT
#undef SPI_SDI_PORT
#undef SPI_SDO_BIT
#undef SPI_SDO_PORT
#undef SPI_CS_BIT
#undef SPI_CS_PORT
#undef SPI_CS_IO_OFFSET
#undef I2C_CLK_BIT
#undef I2C_CLK_PORT
#undef I2C_DATA_BIT
#undef I2C_DATA_PORT
#undef TX2_BIT
#undef TX2_PORT
#undef RX2_BIT
#undef RX2_PORT
#undef SPI2_CLK_BIT
#undef SPI2_CLK_PORT
#undef SPI2_SDI_BIT
#undef SPI2_SDI_PORT
#undef SPI2_SDO_BIT
#undef SPI2_SDO_PORT
#undef SPI2_CS_BIT
#undef SPI2_CS_PORT
#undef SPI2_CS_IO_OFFSET
#undef IC74HC595_COUNT
#undef IC74HC595_CUSTOM_SHIFT_IO
#undef PCINT0_PORT
#undef PCINT1_PORT
#undef PCINT2_PORT
#undef PLANNER_BUFFER_SIZE
#undef USE_MACRO_BUFFER

#ifdef __cplusplus
}
#endif
#endif
