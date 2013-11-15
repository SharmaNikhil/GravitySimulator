#include "Body.h"
#include "math.h"

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
	Body(float x, float y, float z, float mass_, PhysicsVector v, PhysicsVector a)
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
	void setXPos(float x){x_pos = x;}
	void setYPos(float y){y_pos = y;}
	void setZPos(float z){z_pos = z;}
	void addAcceleration(PhysicsVector a){acc.add(a);}
	float getDistance(Body b){return sqrt( (pow(x-b.getXPos(),2))+(pow(y-b.getYPos(),2))+(pow(z-z.getZPos(),2)) );}
	PhysicsVector getVelocity(){return vel;}
	PhysicsVector getAcceleration(){return acc;}
	void interactWith(Body b)
	{
		//TODO add gravity code
	}
};
