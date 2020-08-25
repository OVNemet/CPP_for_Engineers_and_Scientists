#include <iostream>

int main() {
	float lines, n, additional, extra;
	
	n = 100;
	additional = n + 10;
	
	lines = n * (n - 1) / 2;
	
	extra = additional * (additional - 1) / 2;
	
	std::cout << "Lines " << lines << ", and " << extra - lines << " extra lines" << '\n';
	
	return 0;
}
