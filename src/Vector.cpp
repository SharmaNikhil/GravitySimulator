#include "Vector.h"
#include "iostream"

class Vector
{
private:
	float x,y,z = 0;
	float magnitude = 0;
public:
	Vector(float x_, float y_, float z_)
	{
		x = x_;
		y = y_;
		z = z_;
		magnitude = sqrt(x^2+y^2+z^2);
	}
	float getX(){return x;}
	float getY(){return y;}
	float getZ(){return z;}
	float getMagnitude(){return magnitude;}
	float getXYAngle(){return arctan(y/x);}
	float getXZAngle(){return arctan(z/x);}
	float getYZAngle(){return arctan(z/y);}
	void add(Vector v)
	{
		x += v.getX();
		y += v.getY();
		z += v.getZ();
	}
	static PhysicsVector zero()
	{
		return new Vector(0,0,0);
	}
}
