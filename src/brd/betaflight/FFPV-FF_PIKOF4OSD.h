/*==============================================================================
Generated on: 2025-06-11 20:35:53.889691
Generated by: betaflight_target_converter.py
Source: https://github.com/betaflight/unified-targets
Board name: FF_PIKOF4OSD
Manufacturer ID: FFPV

//copy this line to madflight.ino to use this flight controller
#define MF_BOARD "brd/betaflight/FFPV-FF_PIKOF4OSD.h"

Note: madflight will pick the last sensor defined here, this might not be the sensor that is actually on the board. Comment the offending sensors out, or use madflight_config to override.
==============================================================================*/

#define MF_BOARD_NAME "BETAFLIGHT-FFPV-FF_PIKOF4OSD"
#define MF_MCU_NAME "STM32F405"

const char madflight_board[] = R""(
imu_bus_type SPI
imu_gizmo MPU6500 // #define USE_GYRO_SPI_MPU6500
imu_gizmo MPU6000 // #define USE_GYRO_SPI_MPU6000
// resource BEEPER 1 A14
pin_out0 PA3 // resource MOTOR 1 A03
pin_out1 PB0 // resource MOTOR 2 B00
pin_out2 PA2 // resource MOTOR 3 A02
pin_out3 PB1 // resource MOTOR 4 B01
pin_out4 PB14 // resource MOTOR 5 B14
pin_out5 PB15 // resource MOTOR 6 B15
// resource LED_STRIP 1 B07
pin_ser0_tx PA9 // resource SERIAL_TX 1 A09
pin_ser2_tx PB10 // resource SERIAL_TX 3 B10
pin_ser3_tx PA0 // resource SERIAL_TX 4 A00
pin_ser5_tx PC6 // resource SERIAL_TX 6 C06
pin_ser0_rx PA10 // resource SERIAL_RX 1 A10
pin_ser2_rx PB11 // resource SERIAL_RX 3 B11
pin_ser3_rx PA1 // resource SERIAL_RX 4 A01
pin_ser5_rx PC7 // resource SERIAL_RX 6 C07
pin_ser2_inv PC3 // resource INVERTER 3 C03
pin_led PB5 // resource LED 1 B05
// resource LED 2 B04
pin_spi0_sclk PA5 // resource SPI_SCK 1 A05
pin_spi2_sclk PC10 // resource SPI_SCK 3 C10
pin_spi0_miso PA6 // resource SPI_MISO 1 A06
pin_spi2_miso PC11 // resource SPI_MISO 3 C11
pin_spi0_mosi PA7 // resource SPI_MOSI 1 A07
pin_spi2_mosi PC12 // resource SPI_MOSI 3 C12
// resource ESCSERIAL 1 A03
pin_bat_v PC2 // resource ADC_BATT 1 C02
bat_gizmo ADC
pin_bat_i PC1 // resource ADC_CURR 1 C01
bat_gizmo ADC
// resource OSD_CS 1 A04
pin_imu_int PC4 // resource GYRO_EXTI 1 C04
pin_imu_cs PA15 // resource GYRO_CS 1 A15
// set current_meter = ADC
// set battery_meter = ADC
// set ibata_scale = 250
// set beeper_inversion = ON
// set beeper_od = OFF
// set system_hse_mhz = 8
// set max7456_spi_bus = 1
// set gyro_1_bustype = SPI
imu_spi_bus 2 // set gyro_1_spibus = 3
imu_align CW180 // set gyro_1_sensor_align = CW180
// set gyro_1_align_yaw = 1800
)""; //end of madflight_board


/*
#==============================================================================
# BetaFlight Source file
#==============================================================================
# Betaflight / STM32F405 (S405) 4.2.0 Feb  2 2020 / 14:39:25 (30bf9e809f) MSP API: 1.43

#define USE_ACC
#define USE_ACC_SPI_MPU6500
#define USE_ACC_SPI_MPU6000
#define USE_GYRO
#define USE_GYRO_SPI_MPU6500
#define USE_GYRO_SPI_MPU6000
#define USE_MAX7456

board_name FF_PIKOF4OSD
manufacturer_id FFPV

# resources
resource BEEPER 1 A14
resource MOTOR 1 A03
resource MOTOR 2 B00
resource MOTOR 3 A02
resource MOTOR 4 B01
resource MOTOR 5 B14
resource MOTOR 6 B15
resource LED_STRIP 1 B07
resource SERIAL_TX 1 A09
resource SERIAL_TX 3 B10
resource SERIAL_TX 4 A00
resource SERIAL_TX 6 C06
resource SERIAL_RX 1 A10
resource SERIAL_RX 3 B11
resource SERIAL_RX 4 A01
resource SERIAL_RX 6 C07
resource INVERTER 3 C03
resource LED 1 B05
resource LED 2 B04
resource SPI_SCK 1 A05
resource SPI_SCK 3 C10
resource SPI_MISO 1 A06
resource SPI_MISO 3 C11
resource SPI_MOSI 1 A07
resource SPI_MOSI 3 C12
resource ESCSERIAL 1 A03
resource ADC_BATT 1 C02
resource ADC_CURR 1 C01
resource OSD_CS 1 A04
resource GYRO_EXTI 1 C04
resource GYRO_CS 1 A15

# timer
timer A03 AF1
# pin A03: TIM2 CH4 (AF1)
timer B00 AF2
# pin B00: TIM3 CH3 (AF2)
timer A02 AF1
# pin A02: TIM2 CH3 (AF1)
timer B01 AF2
# pin B01: TIM3 CH4 (AF2)
timer B14 AF3
# pin B14: TIM8 CH2N (AF3)
timer B15 AF1
# pin B15: TIM1 CH3N (AF1)
timer B07 AF2
# pin B07: TIM4 CH2 (AF2)

# dma
dma ADC 1 1
# ADC 1: DMA2 Stream 4 Channel 0
dma pin A03 1
# pin A03: DMA1 Stream 6 Channel 3
dma pin B00 0
# pin B00: DMA1 Stream 7 Channel 5
dma pin A02 0
# pin A02: DMA1 Stream 1 Channel 3
dma pin B01 0
# pin B01: DMA1 Stream 2 Channel 5
dma pin B14 0
# pin B14: DMA2 Stream 2 Channel 0
dma pin B15 0
# pin B15: DMA2 Stream 6 Channel 0
dma pin B07 0
# pin B07: DMA1 Stream 3 Channel 2

# feature
feature OSD

# master
set current_meter = ADC
set battery_meter = ADC
set ibata_scale = 250
set beeper_inversion = ON
set beeper_od = OFF
set system_hse_mhz = 8
set max7456_spi_bus = 1
set gyro_1_bustype = SPI
set gyro_1_spibus = 3
set gyro_1_sensor_align = CW180
set gyro_1_align_yaw = 1800

*/
