/*==============================================================================
Generated on: 2025-06-11 20:35:54.016246
Generated by: betaflight_target_converter.py
Source: https://github.com/betaflight/unified-targets
Board name: IFLIGHT_F411_PRO
Manufacturer ID: IFRC

//copy this line to madflight.ino to use this flight controller
#define MF_BOARD "brd/betaflight/IFRC-IFLIGHT_F411_PRO.h"

Note: madflight will pick the last sensor defined here, this might not be the sensor that is actually on the board. Comment the offending sensors out, or use madflight_config to override.
==============================================================================*/

#define MF_BOARD_NAME "BETAFLIGHT-IFRC-IFLIGHT_F411_PRO"
#define MF_MCU_NAME "STM32F411"

const char madflight_board[] = R""(
imu_bus_type SPI
imu_gizmo MPU6000 // #define USE_GYRO_SPI_MPU6000
imu_gizmo ICM42688P // #define USE_GYRO_SPI_ICM42688P
imu_gizmo ICM20689 // #define USE_GYRO_SPI_ICM20689
bar_gizmo BMP280 // #define USE_BARO_BMP280
bar_gizmo DPS310 // #define USE_BARO_DPS310
// resource BEEPER 1 B02
pin_out0 PA0 // resource MOTOR 1 A00
pin_out1 PB10 // resource MOTOR 2 B10
pin_out2 PB6 // resource MOTOR 3 B06
pin_out3 PB7 // resource MOTOR 4 B07
pin_rcl_ppm PA3 // resource PPM 1 A03
// resource LED_STRIP 1 A08
pin_ser0_tx PA9 // resource SERIAL_TX 1 A09
pin_ser1_tx PA2 // resource SERIAL_TX 2 A02
pin_ser0_rx PA10 // resource SERIAL_RX 1 A10
pin_ser1_rx PA3 // resource SERIAL_RX 2 A03
pin_i2c0_scl PB8 // resource I2C_SCL 1 B08
pin_i2c0_sda PB9 // resource I2C_SDA 1 B09
pin_led PC13 // resource LED 1 C13
// resource LED 2 C14
pin_spi0_sclk PA5 // resource SPI_SCK 1 A05
pin_spi1_sclk PB13 // resource SPI_SCK 2 B13
pin_spi2_sclk PB3 // resource SPI_SCK 3 B03
pin_spi0_miso PA6 // resource SPI_MISO 1 A06
pin_spi1_miso PB14 // resource SPI_MISO 2 B14
pin_spi2_miso PB4 // resource SPI_MISO 3 B04
pin_spi0_mosi PA7 // resource SPI_MOSI 1 A07
pin_spi1_mosi PB15 // resource SPI_MOSI 2 B15
pin_spi2_mosi PB5 // resource SPI_MOSI 3 B05
pin_bat_v PB0 // resource ADC_BATT 1 B00
bat_gizmo ADC
pin_bat_i PB1 // resource ADC_CURR 1 B01
bat_gizmo ADC
// resource FLASH_CS 1 A15
// resource OSD_CS 1 B12
pin_imu_int PA1 // resource GYRO_EXTI 1 A01
pin_imu_cs PA4 // resource GYRO_CS 1 A04
// resource USB_DETECT 1 C15
// set baro_bustype = I2C
bar_i2c_bus 0 // set baro_i2c_device = 1
// set blackbox_device = SPIFLASH
// set current_meter = ADC
// set battery_meter = ADC
// set system_hse_mhz = 8
// set max7456_spi_bus = 2
// set flash_spi_bus = 3
// set gyro_1_bustype = SPI
imu_spi_bus 0 // set gyro_1_spibus = 1
imu_align CW0 // set gyro_1_sensor_align = CW0
// set beeper_inversion = ON
// set beeper_od = OFF
// set dshot_bitbang = OFF
)""; //end of madflight_board


/*
#==============================================================================
# BetaFlight Source file
#==============================================================================
# Betaflight / STM32F411 (S411) 4.0.0

#define USE_ACC
#define USE_ACC_SPI_MPU6000
#define USE_GYRO
#define USE_GYRO_SPI_MPU6000
#define USE_ACCGYRO_BMI270
#define USE_GYRO_SPI_ICM42688P
#define USE_ACC_SPI_ICM42688P
#define USE_GYRO_SPI_ICM20689
#define USE_ACC_SPI_ICM20689
#define USE_BARO
#define USE_BARO_BMP280
#define USE_BARO_DPS310
#define USE_FLASH
#define USE_FLASH_M25P16
#define USE_MAX7456

board_name IFLIGHT_F411_PRO
manufacturer_id IFRC

# resources
resource BEEPER 1 B02
resource MOTOR 1 A00
resource MOTOR 2 B10
resource MOTOR 3 B06
resource MOTOR 4 B07
resource PPM 1 A03
resource LED_STRIP 1 A08
resource SERIAL_TX 1 A09
resource SERIAL_TX 2 A02
resource SERIAL_RX 1 A10
resource SERIAL_RX 2 A03
resource I2C_SCL 1 B08
resource I2C_SDA 1 B09
resource LED 1 C13
resource LED 2 C14
resource SPI_SCK 1 A05
resource SPI_SCK 2 B13
resource SPI_SCK 3 B03
resource SPI_MISO 1 A06
resource SPI_MISO 2 B14
resource SPI_MISO 3 B04
resource SPI_MOSI 1 A07
resource SPI_MOSI 2 B15
resource SPI_MOSI 3 B05
resource ADC_BATT 1 B00
resource ADC_CURR 1 B01
resource FLASH_CS 1 A15
resource OSD_CS 1 B12
resource GYRO_EXTI 1 A01
resource GYRO_CS 1 A04
resource USB_DETECT 1 C15

# timer
timer A03 AF3
# pin A03: TIM9 CH2 (AF3)
timer A00 AF1
# pin A00: TIM2 CH1 (AF1)
timer B10 AF1
# pin B10: TIM2 CH3 (AF1)
timer B06 AF2
# pin B06: TIM4 CH1 (AF2)
timer B07 AF2
# pin B07: TIM4 CH2 (AF2)
timer A08 AF1
# pin A08: TIM1 CH1 (AF1)

# dma
dma ADC 1 1
# ADC 1: DMA2 Stream 4 Channel 0
dma pin A00 0
# pin A00: DMA1 Stream 5 Channel 3
dma pin B10 0
# pin B10: DMA1 Stream 1 Channel 3
dma pin B06 0
# pin B06: DMA1 Stream 0 Channel 2
dma pin B07 0
# pin B07: DMA1 Stream 3 Channel 2
dma pin A08 0
# pin A08: DMA2 Stream 6 Channel 0

# feature
feature OSD

# master
set baro_bustype = I2C
set baro_i2c_device = 1
set blackbox_device = SPIFLASH
set current_meter = ADC
set battery_meter = ADC
set system_hse_mhz = 8
set max7456_spi_bus = 2
set flash_spi_bus = 3
set gyro_1_bustype = SPI
set gyro_1_spibus = 1
set gyro_1_sensor_align = CW0
set beeper_inversion = ON
set beeper_od = OFF
set dshot_bitbang = OFF

*/
