/*
 * LMove.h
 *
 *  Created on: 22 бер. 2020 р.
 *      Author: wbc
 */

#ifndef INC_LMOVE_H_
#define INC_LMOVE_H_

void LstartPositionTracking(LAccel AccelId);
void LgetPosition(LAccel AccelId,Vector3D Position);
void LresetPositionTracking(LAccel AccelId,Vector3D ResetPosition);

#endif /* INC_LMOVE_H_ */
