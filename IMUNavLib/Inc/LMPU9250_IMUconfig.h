/*
 * LMPU9250_IMUconfig.h
 *
 *  Created on: 22 бер. 2020 р.
 *      Author: wbc
 */

#ifndef INC_LMPU9250_IMUCONFIG_H_
#define INC_LMPU9250_IMUCONFIG_H_

#include "LMPU9250_RegList.h"
#include "LMCUdriver.h"

void MPU9250_setGyroDLPF(LGyro GyroId,uint8_t DLPFValue);
void MPU9250_setAccelDLPF(LAccel AccelId,uint8_t DLPFValue);

void MPU9250_setAccelFullScale(LAccel AccelId,uint8_t FSValue);
void MPU9250_setGyroFullScale(LGyro GyroId,uint8_t FSValue);


void MPU9250_setAccelAxisEnable();
void MPU9250_setGyroAxisEnable();
void MPU9250_setMagAxisEnable();


#endif /* INC_LMPU9250_IMUCONFIG_H_ */
