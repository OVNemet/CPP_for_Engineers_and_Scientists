#include <iostream>
#include <cmath>

int main() {
	float r, d, P, S;
		
	d = 7;
	P = 300;
	S = 10000;
	
	r = (d * P) / (M_PI * S);
	
	std::cout << "The radius is: " << r << '\n';

	return 0;
}
