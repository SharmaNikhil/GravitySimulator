#include "PhysicsVector.h"
#include "math.h"

class PhysicsVector
{
private:
	float x;
	float y;
	float z;
	float magnitude;
public:
	PhysicsVector(float x_, float y_, float z_)
	{
		x = x_;
		y = y_;
		z = z_;
		magnitude = sqrt(pow(x,2)+pow(y,2)+pow(z,2));
	}
	float getX(){return x;}
	float getY(){return y;}
	float getZ(){return z;}
	float getMagnitude(){return magnitude;}
	float getXYAngle(){return atan(y/x);}
	float getXZAngle(){return atan(z/x);}
	float getYZAngle(){return atan(z/y);}
	void add(PhysicsVector v)
	{
		x += v.getX();
		y += v.getY();
		z += v.getZ();
	}
	static PhysicsVector zero()
	{
		return PhysicsVector(0,0,0);
	}
};
int main()
{
	return 0;
}
