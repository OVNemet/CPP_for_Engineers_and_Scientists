#include <iostream>

int main() {
	float force, mass, acceleration, accelerationMars, accelerationMoon;
		
	force = 140;
	acceleration = 32.2; // on Earth
	accelerationMars = 12.54; // on Mars
	accelerationMoon = 5.33; // on the Moon
	
	mass = force / acceleration;
	
	std::cout << "The mass on Earth is: " << mass << '\n';
	
	mass = force / accelerationMars;
	
	std::cout << "The mass on Mars is: " << mass << '\n';
	
	mass = force / accelerationMoon;
	
	std::cout << "The mass on Moon is: " << mass << '\n';	

	return 0;
}
