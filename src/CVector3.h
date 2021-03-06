#ifndef _I_CVector3_H_
#define _I_CVector3_H_

#include <cmath>
#include <iostream>
using namespace std;

class CVector3 {

public:

	CVector3(float _x = 0, float _y = 0, float _z = 0) : x(_x), y(_y), z(_z) {}

	~CVector3() {}

	CVector3 operator+(CVector3 const &);
	CVector3 operator-(CVector3 const &);
	CVector3 operator*(float);
	CVector3 operator%(CVector3 const &);

	float operator*(CVector3 const &);
	void   operator=(CVector3 const &);

	friend ostream &operator<<(ostream &F, CVector3 &v);
	friend CVector3 operator*(float scalar, CVector3 &v);

	inline void doNormalize() {
		// calculate length

		float d = getLength();

		// norm only if |v| != 0

		if (d)
			*this = *this * (1.0f / d);

	}

	inline float getLength() { return sqrt((*this) * (*this)); }

	bool operator==(CVector3 const &v2) {
		if (x == v2.x)
			if (y == v2.y)
				if (z == v2.z)
					return true;

		// else

		return false;
	}


public:

	float x;				// x position in space
	float y;				// y position in space
	float z;				// z position in space

};


#endif
