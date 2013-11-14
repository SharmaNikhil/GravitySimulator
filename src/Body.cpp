#include "Body.h"
#include "iostream"

class Body
{
private:
	float mass;
	float x_pos;
	float y_pos;
	float z_pos;
	PhysicsVector vel = PhysicsVector::zero(); //velocity
	PhysicsVector acc = PhysicsVector::zero(); //acceleration
public:
	Body(float x, float y, float z, float mass_, Vector v, Vector a)
	{
		x_pos = x;
		y_pos = y;
		z_pos = z;
		mass = mass_;
		vel = v;
		acc = a;
	}
	float getMass(){return mass;)
	float getXPos(){return x_pos;}
	float getYPos(){return y_pos;}
	float getZPos(){return z_pos;}
	float getDistance(Body b){return sqrt( ((x-b.getXPos())^2)+((y-b.getYPos())^2)+((z-z.getZPos())^2) );}
	PhysicsVector getVelocity(){return vel;}
	PhysicsVector getAcceleration(){return acc;}
}
