#include <iostream>

int main() {
	float moment, height, load, distance, stress;
	
	moment = 10.67; // in^4
	height = 4; // in
	load = 700; // lbs
	distance = 8; // feet
	
	stress = load * distance * (height/2) / moment;
	
	std::cout << "The stress is: " << stress << " lbs/in^2." << '\n';

	return 0;
}
