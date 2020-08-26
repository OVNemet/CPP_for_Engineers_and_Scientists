#include <iostream>
#include <cmath>

int main() {
	float vout, vin, rin, rout;
	
	vin = 1.5;
	rin = 1;
	rout = 0.50;
	
	vout = vin * pow(rin/rout, 2);
	
	std::cout << "The output velocity is " << vout << " ft/sec." << '\n';

	return 0;
}
