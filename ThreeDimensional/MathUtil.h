#ifndef __MATHUTIL_H_INCLUDE__

#define __MATHUTIL_H_INCLUDE__

#include <math.h>

const float kPi = 3.14159265f;
const float k2Pi = kPi * 2.0f;
const float kPiOver2 = kPi / 2.0f;

const float k1OverPi = 1.0f / kPi;
const float k1Over2Pi = 1.0f / k2Pi;

/// <summary>
/// ͨ�����ʵ���2pi���齫�Ƕ�������-pi��pi��������
/// </summary>
/// <param name="theta"></param>
/// <returns></returns>
extern float wrapPi(float theta);

/// <summary>
/// "��ȫ"�ķ����Ǻ���
/// </summary>
/// <param name="x"></param>
/// <returns></returns>
float safeAcos(float x);

/// <summary>
/// ����Ƕȵ�sin��cosֵ
/// </summary>
/// <param name="returnSin">�����sinֵ</param>
/// <param name="returnCos">�����cosֵ</param>
/// <param name="theta">����</param>
inline void sinCos(float* returnSin, float* returnCos, float theta)
{
	*returnSin = sin(theta);
	*returnCos = cos(theta);
}


#endif 





