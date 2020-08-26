#include <iostream>
#include <cmath>

int main() {
	float radius, volume;
	
	radius = 2;
	
	volume = 4 * M_PI * pow(radius, 3) / 3;
	
	std::cout << "The volume of the sphere is " << volume << '\n';
	
	return 0;
}
