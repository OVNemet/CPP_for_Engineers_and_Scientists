#include <iostream>

int main() {
	float time, distance, speed;
	
	distance = 372; // miles
	speed = 67; // mph

	time = distance / speed;
	
	std::cout << "The elapsed time is: " << time << " hours." << '\n';

	return 0;
}
