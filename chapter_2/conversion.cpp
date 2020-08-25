#include <iostream>

int main() {
	float fahrenheit, celsius;

	fahrenheit = 86.5;
	celsius = (5.0 / 9.0) * (fahrenheit - 32.0);
	
	std::cout << "For a Fahrenheit temperature of " << fahrenheit << " degrees, the equivalent Celsius temperature is " << celsius << " degrees." << std::endl;
	
	return 0;
}
