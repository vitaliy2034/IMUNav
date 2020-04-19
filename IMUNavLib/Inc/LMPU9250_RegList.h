/*
 * LMPU9250_RegList.h
 *
 *  Created on: 22 бер. 2020 р.
 *      Author: wbc
 */

#ifndef INC_LMPU9250_REGLIST_H_
#define INC_LMPU9250_REGLIST_H_

//Registers
//Magnetometer Registers
// #define AK8963_ADDRESS   0x0C
#define AK8963_WHO_AM_I  0x00 // should return 0x48
#define AK8963_INFO      0x01
#define AK8963_ST1       0x02  // data ready status bit 0
#define AK8963_XOUT_L	 0x03  // data
#define AK8963_XOUT_H	 0x04
#define AK8963_YOUT_L	 0x05
#define AK8963_YOUT_H	 0x06
#define AK8963_ZOUT_L	 0x07
#define AK8963_ZOUT_H	 0x08
#define AK8963_ST2       0x09  // Data overflow bit 3 and data read error status bit 2
#define AK8963_CNTL1      0x0A  // Power down (0000), single-measurement (0001), self-test (1000) and Fuse ROM (1111) modes on bits 3:0
#define AK8963_ASTC      0x0C  // Self test control
#define AK8963_I2CDIS    0x0F

// I2C disable
#define AK8963_ASAX      0x10  // Fuse ROM x-axis sensitivity adjustment value
#define AK8963_ASAY      0x11  // Fuse ROM y-axis sensitivity adjustment value
#define AK8963_ASAZ      0x12  // Fuse ROM z-axis sensitivity adjustment value

#define SELF_TEST_X_GYRO 0x00
#define SELF_TEST_Y_GYRO 0x01
#define SELF_TEST_Z_GYRO 0x02

// #define X_FINE_GAIN      0x03 // [7:0] fine gain
// #define Y_FINE_GAIN      0x04
// #define Z_FINE_GAIN      0x05
// #define XA_OFFSET_H      0x06 // User-defined trim values for accelerometer
// #define XA_OFFSET_L_TC   0x07
// #define YA_OFFSET_H      0x08
// #define YA_OFFSET_L_TC   0x09
// #define ZA_OFFSET_H      0x0A
// #define ZA_OFFSET_L_TC   0x0B

#define SELF_TEST_X_ACCEL 0x0D
#define SELF_TEST_Y_ACCEL 0x0E
#define SELF_TEST_Z_ACCEL 0x0F

#define SELF_TEST_A      0x10

#define XG_OFFSET_H      0x13  // User-defined trim values for gyroscope
#define XG_OFFSET_L      0x14
#define YG_OFFSET_H      0x15
#define YG_OFFSET_L      0x16
#define ZG_OFFSET_H      0x17
#define ZG_OFFSET_L      0x18
#define SMPLRT_DIV       0x19
#define MPU_CONFIG       0x1A
#define GYRO_CONFIG      0x1B
#define ACCEL_CONFIG     0x1C
#define ACCEL_CONFIG2    0x1D
#define LP_ACCEL_ODR     0x1E
#define WOM_THR          0x1F

#define MOT_DUR          0x20  // Duration counter threshold for motion interrupt generation, 1 kHz rate, LSB = 1 ms
#define ZMOT_THR         0x21  // Zero-motion detection threshold bits [7:0]
#define ZRMOT_DUR        0x22  // Duration counter threshold for zero motion interrupt generation, 16 Hz rate, LSB = 64 ms

#define FIFO_EN          0x23
#define I2C_MST_CTRL     0x24
#define I2C_SLV0_ADDR    0x25
#define I2C_SLV0_REG     0x26
#define I2C_SLV0_CTRL    0x27
#define I2C_SLV1_ADDR    0x28
#define I2C_SLV1_REG     0x29
#define I2C_SLV1_CTRL    0x2A
#define I2C_SLV2_ADDR    0x2B
#define I2C_SLV2_REG     0x2C
#define I2C_SLV2_CTRL    0x2D
#define I2C_SLV3_ADDR    0x2E
#define I2C_SLV3_REG     0x2F
#define I2C_SLV3_CTRL    0x30
#define I2C_SLV4_ADDR    0x31
#define I2C_SLV4_REG     0x32
#define I2C_SLV4_DO      0x33
#define I2C_SLV4_CTRL    0x34
#define I2C_SLV4_DI      0x35
#define I2C_MST_STATUS   0x36
#define INT_PIN_CFG      0x37
#define INT_ENABLE       0x38
#define DMP_INT_STATUS   0x39  // Check DMP interrupt
#define INT_STATUS       0x3A
#define ACCEL_XOUT_H     0x3B
#define ACCEL_XOUT_L     0x3C
#define ACCEL_YOUT_H     0x3D
#define ACCEL_YOUT_L     0x3E
#define ACCEL_ZOUT_H     0x3F
#define ACCEL_ZOUT_L     0x40
#define TEMP_OUT_H       0x41
#define TEMP_OUT_L       0x42
#define GYRO_XOUT_H      0x43
#define GYRO_XOUT_L      0x44
#define GYRO_YOUT_H      0x45
#define GYRO_YOUT_L      0x46
#define GYRO_ZOUT_H      0x47
#define GYRO_ZOUT_L      0x48
#define EXT_SENS_DATA_00 0x49
#define EXT_SENS_DATA_01 0x4A
#define EXT_SENS_DATA_02 0x4B
#define EXT_SENS_DATA_03 0x4C
#define EXT_SENS_DATA_04 0x4D
#define EXT_SENS_DATA_05 0x4E
#define EXT_SENS_DATA_06 0x4F
#define EXT_SENS_DATA_07 0x50
#define EXT_SENS_DATA_08 0x51
#define EXT_SENS_DATA_09 0x52
#define EXT_SENS_DATA_10 0x53
#define EXT_SENS_DATA_11 0x54
#define EXT_SENS_DATA_12 0x55
#define EXT_SENS_DATA_13 0x56
#define EXT_SENS_DATA_14 0x57
#define EXT_SENS_DATA_15 0x58
#define EXT_SENS_DATA_16 0x59
#define EXT_SENS_DATA_17 0x5A
#define EXT_SENS_DATA_18 0x5B
#define EXT_SENS_DATA_19 0x5C
#define EXT_SENS_DATA_20 0x5D
#define EXT_SENS_DATA_21 0x5E
#define EXT_SENS_DATA_22 0x5F
#define EXT_SENS_DATA_23 0x60
#define MOT_DETECT_STATUS 0x61
#define I2C_SLV0_DO      0x63
#define I2C_SLV1_DO      0x64
#define I2C_SLV2_DO      0x65
#define I2C_SLV3_DO      0x66
#define I2C_MST_DELAY_CTRL 0x67
#define SIGNAL_PATH_RESET  0x68
#define MOT_DETECT_CTRL  0x69
#define USER_CTRL        0x6A  // Bit 7 enable DMP, bit 3 reset DMP
#define PWR_MGMT_1       0x6B // Device defaults to the SLEEP mode
#define PWR_MGMT_2       0x6C
#define DMP_BANK         0x6D  // Activates a specific bank in the DMP
#define DMP_RW_PNT       0x6E  // Set read/write pointer to a specific start address in specified DMP bank
#define DMP_REG          0x6F  // Register in DMP from which to read or to which to write
#define DMP_REG_1        0x70
#define DMP_REG_2        0x71
#define FIFO_COUNTH      0x72
#define FIFO_COUNTL      0x73
#define FIFO_R_W         0x74
#define WHO_AM_I_MPU9250 0x75 // Should return 0x71
#define XA_OFFSET_H      0x77
#define XA_OFFSET_L      0x78
#define YA_OFFSET_H      0x7A
#define YA_OFFSET_L      0x7B
#define ZA_OFFSET_H      0x7D
#define ZA_OFFSET_L      0x7E

//Registers` setup value:
//Accelerometer Full Scale :
#define ACCEL_FS_2G (0<<3) //+-2g
#define ACCEL_FS_4G (1<<3) //+-4g
#define ACCEL_FS_8G (2<<3) //+-8g
#define ACCEL_FS_16G (3<<3)//+-16g

//Accelerometer Data Rates and Bandwidths (Normal Mode)
//Structure:ACCEL_Bandwidth(Hz)_DataRate(kHz)

#define ACCEL_BW_1046Hz_Rate_4kHz (1<<3)	//Filter:Dec1  delay:O.503 ms
#define ACCEL_BW_218Hz_Rate_1kHz 0			//Filter:DLPF* delay:1.88  ms
#define ACCEL_BW_99Hz_Rate_1kHz  2			//Filter:DLPF* delay:2.88  ms
#define ACCEL_BW_45Hz_Rate_1kHz  3			//Filter:DLPF* delay:4.88  ms
#define ACCEL_BW_21Hz_Rate_1kHz  4			//Filter:DLPF* delay:8.87  ms
#define ACCEL_BW_10Hz_Rate_1kHz  5			//Filter:DLPF* delay:16.83 ms
#define ACCEL_BW_5Hz_Rate_1kHz	 6			//Filter:DLPF* delay:32.48 ms
#define ACCEL_BW_420Hz_Rate_1kHz  7			//Filter:Dec2  delay:1.38  ms
//For more information refer to Register Manual 9250 register 29
//*Digital Low Pass Filter

/*Accelerometer Data Rates and Bandwidths (Low-Power Mode)
Structure:ACCEL_LP_DataRate(Hz) Bandwidth:1.1kHz*/
#define ACCEL_LP_0Hz26	0
#define ACCEL_LP_0Hz49	1
#define ACCEL_LP_0Hz98	2
#define ACCEL_LP_1Hz95	3
#define ACCEL_LP_3Hz91	4
#define ACCEL_LP_7Hz81	5
#define ACCEL_LP_15Hz63	6
#define ACCEL_LP_31Hz25	7
#define ACCEL_LP_62Hz50	8
#define ACCEL_LP_125Hz	9
#define ACCEL_LP_250Hz	10
#define ACCEL_LP_500Hz	11

//Gyroscope Full Scale:
#define GYRO_FS_250DPS (0<<3) //+-250 deg/s
#define GYRO_FS_500DPS (1<<3) //+-500 deg/s
#define GYRO_FS_1000DPS (2<<3) //+-1000 deg/s
#define GYRO_FS_2000DPS (3<<3)//+-2000 deg/s

//Gyroscope and Temperature sensor Data Rates and Bandwidths. Filter:DLPF*
//Structure:GYRO_Bandwidth(Hz)_DataRate(kHz)
#define GYRO_BW_250Hz_Rate_8kHz 0	//Delay:O.97 ms 	BW(TempSens):4000Hz Delay(TempSens):0.04 ms
#define GYRO_BW_184Hz_Rate_1kHz 1	//Delay:2.9 ms 		BW(TempSens):188Hz 	Delay(TempSens):1.9 ms
#define GYRO_BW_92Hz_Rate_1kHz 2	//Delay:3.9 ms 		BW(TempSens):98Hz 	Delay(TempSens):2.8 ms
#define GYRO_BW_41Hz_Rate_1kHz 3	//Delay:5.9 ms 		BW(TempSens):42Hz 	Delay(TempSens):4.8 ms
#define GYRO_BW_20Hz_Rate_1kHz 4	//Delay:9.9 ms 		BW(TempSens):20Hz 	Delay(TempSens):8.3 ms
#define GYRO_BW_10Hz_Rate_1kHz 5	//Delay:17.85 ms 	BW(TempSens):10Hz 	Delay(TempSens):13.4 ms
#define GYRO_BW_5Hz_Rate_1kHz 6		//Delay:33.48 ms 	BW(TempSens):5Hz 	Delay(TempSens):18.6 ms
#define GYRO_BW_3600Hz_Rate_8kHz 7	//Delay:O.17 ms		BW(TempSens):4000Hz Delay(TempSens):0.04 ms

#define GYRO_BW_3600Hz_Rate_32kHz 16	//Delay:O.11 ms 	BW(TempSens):4000Hz Delay(TempSens):0.04 ms
#define GYRO_BW_8800Hz_Rate_32kHz 8		//Delay:O.064 ms 	BW(TempSens):4000Hz Delay(TempSens):0.04 ms
//For more information refer to Register Manual 9250 register 27,26
//*Digital Low Pass Filter

//Magnetometer FullScale:


#endif /* INC_LMPU9250_REGLIST_H_ */
