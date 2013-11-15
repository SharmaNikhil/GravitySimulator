#ifndef "math.h"
#define "math.h"
#pragma once

#include "PhysicsVector.h"

class Body
{
private:
	float mass;
	float x_pos;
	float y_pos;
	float z_pos;
	PhysicsVector vel;
	PhysicsVector acc;
public:
	Body(float x_pos,float y_pos,float z_pos,float mass,PhysicsVector vel,PhysicsVector acc);
	float getMass();	
	float getXPos();
	float getYPos();
	float getZPos();
	void setXPos(float x);
	void setYPos(float y);
	void setZPos(float z);
	void addAcceleration(PhysicsVector a);
	float getDistance(Body b);
	PhysicsVector getVelocity();
	PhysicsVector getAcceleration();
	void interactWith(Body b); //modifies acceleration of this body, not body b
}
