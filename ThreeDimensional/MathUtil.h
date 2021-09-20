#ifndef __MATHUTIL_H_INCLUDE__

#define __MATHUTIL_H_INCLUDE__

#include <math.h>

const float kPi = 3.14159265f;
const float k2Pi = kPi * 2.0f;
const float kPiOver2 = kPi / 2.0f;

const float k1OverPi = 1.0f / kPi;
const float k1Over2Pi = 1.0f / k2Pi;

/// <summary>
/// 通过加适当的2pi背书将角度限制在-pi到pi的区间内
/// </summary>
/// <param name="theta"></param>
/// <returns></returns>
extern float wrapPi(float theta);

/// <summary>
/// "安全"的反三角函数
/// </summary>
/// <param name="x"></param>
/// <returns></returns>
float safeAcos(float x);

/// <summary>
/// 计算角度的sin和cos值
/// </summary>
/// <param name="returnSin">计算的sin值</param>
/// <param name="returnCos">计算的cos值</param>
/// <param name="theta">参数</param>
inline void sinCos(float* returnSin, float* returnCos, float theta)
{
	*returnSin = sin(theta);
	*returnCos = cos(theta);
}


#endif 





