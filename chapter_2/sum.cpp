#include <iostream>

int main() {
	int n = 1000;
	float sum;
	
	sum = (n/2) * (2 * 100 + (n - 1) * 1);
	
	std::cout << "The sum is: " << sum << '\n';

	return 0;
}
