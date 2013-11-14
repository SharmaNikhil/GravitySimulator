class PhysicsVector
{
private:
	float x;
	float y;
	float z;
public:
	PhysicsVector(float x,float y,float z);
	float getX();
	float getY();
	float getZ();
	float getMagnitude();
	float getXYAngle();
	float getXZAngle();
	float getYZAngle();
	void add(PhysicsVector v);
	
	static PhysicsVector zero(); //returns zero PhysicsVector
}
