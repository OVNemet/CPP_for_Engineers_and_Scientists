#include <iostream>

int main() {
	float force, distance, work;
	
	force = 1500; // Newstons
	distance = 0.02; // cm
	
	work = 6 * force * distance;
	
	std::cout << "The work done is: " << work << " Nm." << '\n';
	
	
	return 0;
}

