#include <iostream>
using std::cout;

#include <iomanip>

int main() {
	double speed, fe, fr;
	

    std::cout << std::fixed;
    std::cout << std::setprecision(8);	
	
	speed = 55;
	fe = 2e10;
	// fr = 2.00000035e10;
	
	// speed = 6.685e8 * (fr - fe) / (fr +fe);
	fr = fe * (-speed - 6.685e8) / (speed - 6.685e8);
	cout << "If the speed is " << speed << " miles/hour, the fr is: " << fr << " sec^-1." << std::endl;
	
	return 0;
}
