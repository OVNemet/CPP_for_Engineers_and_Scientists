#include <iostream>

int main() {
	float load, stress, inertia, distance, height;
		
	stress = 3000;
	inertia = 10.67;
	distance = 8;
	height = 4;
	
	load = (stress * inertia) / (distance * (height / 2));
	
	std::cout << "The maximum load is: " << load << '\n';

	return 0;
}
