#include <iostream>

int main() {
	float flowRate, velocity, force;
	
	flowRate = 2.3;
	velocity = 4.25;

	force = flowRate * velocity;
	
	std::cout << "The horizontal force, in Newtons, is " << force << '\n';

	return 0;
}
