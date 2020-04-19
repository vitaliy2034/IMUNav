/*
 * LIMUdrivers.h
 *
 *  Created on: 22 бер. 2020 р.
 *      Author: wbc
 */

#ifndef INC_LIMUDRIVERS_H_
#define INC_LIMUDRIVERS_H_

#include "LIMUlist.h"

typedef uint16_t  LAccel;
typedef uint16_t  LGyro;
typedef uint16_t  LMag;

typedef struct{
	uint16_t X,Y,Z;

} VectorRaw;

typedef struct{
	float X,Y,Z;

} Vector3D;

typedef struct{
	float X,Y,Z,W;

} Vector4D;

void LBegin(LAccel AccelId, LGyro GyroId, LMag MagId);
void LEnd(LAccel AccelId, LGyro GyroId, LMag MagId);

void LreadAccel(LAccel AccelId, VectorRaw * Data);


#endif /* INC_LIMUDRIVERS_H_ */
