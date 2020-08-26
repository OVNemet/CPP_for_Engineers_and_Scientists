#include <iostream>
#include <cmath>

int main() {
	float radius, volume;
	
	radius = 1.67;
	
	volume = pow(2 * radius, 3);
	
	std::cout << "The volume of the cube is " << volume << '\n';
	
	return 0;
}
