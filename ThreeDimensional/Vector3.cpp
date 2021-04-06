#include "Vector3.h"


Vector3& Vector3::operator=(const Vector3& vect)
{
    // TODO: 在此处插入 return 语句
    x = vect.x;
    y = vect.y;
    z = vect.z;

    return *this;
}

bool Vector3::operator==(const Vector3& vect)
{
    return x == vect.x && y == vect.y && z == vect.z;
}

bool Vector3::operator!=(const Vector3& vect)
{
    return x != vect.x || y != vect.y || z != vect.z;
}

void Vector3::zero()
{
    x = y = z = 0.0f;
}

Vector3 Vector3::operator-()
{
    return Vector3(-x, -y, -z);
}

Vector3 Vector3::operator+(const Vector3& a) const
{
    return Vector3(x + a.x, y + a.y, z + a.z);
}

Vector3 Vector3::operator-(const Vector3& a) const
{
    return Vector3(x - a.x, y - a.y, z - a.z);
}

void Vector3::normalize()
{
    float magSq = x * x + y * y + z * z;
    if (magSq > 0.0f) // 检查除零
    {
        float oneOverMag = 1.0f / sqrt(magSq);
        x *= oneOverMag;
        y *= oneOverMag;
        z *= oneOverMag;
    }
}

Vector3 Vector3::operator*( float a) const
{
    return Vector3(x * a, y * a, z * a);
}

Vector3 Vector3::operator/(float a) const
{
    float oneOverA = 1.0f / a;
    return Vector3(x / oneOverA, y / oneOverA, z / oneOverA);
}

Vector3 Vector3::operator+=(const Vector3& a)
{
    x += a.x;
    y += a.y;
    z += a.z;
    return *this;
}

Vector3 Vector3::operator-=(const Vector3& a)
{
    x -= a.x;
    y -= a.y;
    z -= a.z;
    return *this;
}

Vector3 Vector3::operator*=(float a)
{
    x *= a;
    y *= a;
    z *= a;
    return *this;
}

Vector3 Vector3::operator/=(float a)
{
    float oneOverA = 1.0f / a;
    x *= oneOverA;
    y *= oneOverA;
    z *= oneOverA;

    return *this;
}

float Vector3::operator *(const Vector3& vect)const
{
    return x * vect.x + y * vect.y + z * vect.z;
}

