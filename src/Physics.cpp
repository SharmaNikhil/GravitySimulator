//Physics.cpp
#include "Physics.h"
#include "math.h"

class Physics
{
public:
	const static float G_CONST = 6.637384*10^-11; //m^3 * kg^-1 * s^-2
	static float gForce(Body b1,Body b2)
	{
		return G_CONST((b1.getMass()*b2.getMass())/b1.getDistance(b2));
	}
}
