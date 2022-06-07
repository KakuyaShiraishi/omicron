

#include <cmath>
#include "CVector3.h"

ostream &operator<<(ostream &F, CVector3 &v) {
	F << "(";
	F << v.x << "," << v.y << "," << v.z;
	F << ")";

	return F;
}

CVector3 operator*(float scalar, CVector3 &v) {
	return CVector3(v.x*scalar, v.y*scalar, v.z*scalar);
}

CVector3 CVector3::operator+(CVector3 const &w) {
	return CVector3(x + w.x, y + w.y, z + w.z);
}

CVector3 CVector3::operator-(CVector3 const &w) {
	return CVector3(x - w.x, y - w.y, z - w.z);
}

CVector3 CVector3::operator*(float scalar) {
	return CVector3(x*scalar, y*scalar, z*scalar);
}

float CVector3::operator*(CVector3 const &w) {
	return (x*w.x + y * w.y + z * w.z);
}

CVector3 CVector3::operator%(CVector3 const &w) {
	return CVector3(y*w.z - z * w.y, z*w.x - x * w.z, x*w.y - y * w.x);
}

void CVector3::operator=(CVector3 const &w) {
	x = w.x;
	y = w.y;
	z = w.z;
}






