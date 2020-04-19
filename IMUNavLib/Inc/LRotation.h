/*
 * LRotation.h
 *
 *  Created on: 22 бер. 2020 р.
 *      Author: wbc
 */

#ifndef INC_LROTATION_H_
#define INC_LROTATION_H_

#include"LIMUdrivers.h"


void LresetGyroEulerAngel(LGyro GyroId,Vector3D ResetAngel);
void LresetGyroQuaternion(LGyro GyroId,Vector4D Quaternion);
void LstartGyroAng(LGyro GyroId);

void LgetEulerAngel_ABF(LAccel AccelId, LGyro GyroId, LMag MagId, Vector3D EulerAngel, uint_8 SamplesCount);
void LgetEulerAngel_Kalman(LAccel AccelId, LGyro GyroId, LMag MagId, Vector3D EulerAngel, uint_8 SamplesCount);

#endif /* INC_LROTATION_H_ */
