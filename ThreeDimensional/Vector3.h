#pragma once
#include <math.h>
class Vector3
{
public:
	float x, y, z;

public:
	Vector3():x(0),y(0),z(0) {}
	Vector3(const Vector3& vect) :x(vect.x), y(vect.y), z(vect.z) {}
	Vector3(float nx,float ny,float nz) :x(nx), y(ny), z(nz) {}
	Vector3& operator = (const Vector3& vect);

	bool operator== (const Vector3& vect);
	bool operator!= (const Vector3& vect);

	void zero();
	Vector3 operator - ();

	Vector3 operator + (const Vector3& a)const;
	Vector3 operator - (const Vector3& a)const;
	Vector3 operator * (float a)const;
	/// <summary>
	/// ������ĳ���
	/// </summary>
	/// <param name="a">������ע�⣺���ﲻ���С������顱</param>
	/// <returns></returns>
	Vector3 operator / (float a)const;

	Vector3 operator += (const Vector3& a);
	Vector3 operator -= (const Vector3& a);
	Vector3 operator *= (float a);
	Vector3 operator /= (float a);

	/// <summary>
	/// ������׼��
	/// </summary>
	void normalize();

	float operator *(const Vector3& vect)const;

};

/////////////////////////////////////////////////////////////
	/// 
	/// �ǳ�Ա����
	///
	////////////////////////////////////////////////////////////

	/// <summary>
	/// ������ģ
	/// </summary>
	/// <param name="a"></param>
	/// <returns></returns>
inline float vectorMag(const Vector3& a)
{
	return sqrt(a.x * a.x + a.y * a.y + a.z * a.z);
}

/// <summary>
/// �����������Ĳ��
/// </summary>
/// <param name="a"></param>
/// <param name="b"></param>
/// <returns></returns>
inline Vector3 crossProduct(const Vector3& a, const Vector3& b)
{
	return Vector3(a.y * b.z - a.z * b.y, a.z * b.x - a.x * b.z, a.x * b.y + a.y * b.x);
}

/// <summary>
/// ����������
/// </summary>
/// <param name="k"></param>
/// <param name="v"></param>
/// <returns></returns>
inline Vector3 operator *(float k, const Vector3& v)
{
	return Vector3(k * v.x, k * v.y, k * v.z);
}

/// <summary>
/// ��������֮��ľ���
/// </summary>
/// <param name="a"></param>
/// <param name="b"></param>
/// <returns></returns>
inline float distance(const Vector3& a, const Vector3& b)
{
	float dx = a.x - b.x;
	float dy = a.y - b.y;
	float dz = a.z - b.z;
	return sqrt(dx * dx + dy * dy + dz * dz);
}

extern const Vector3 kZeroVector;
