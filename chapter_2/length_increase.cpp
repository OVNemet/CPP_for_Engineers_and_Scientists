#include <iostream>

int main() {
	float deltal, force, length, width, depth, elast;
	
	force = 4; // Newtons
	length = 3000; // mm
	width = 40; // mm
	depth = 2; // mm
	elast = 110000; // N//mm^2
	
	deltal = (force * length) / (width * depth * elast);
	
	std::cout << "The delta l is: " << deltal << " mm." << '\n';

	return 0;
}
