#include <iostream>
using std::cout;

int main() {
	cout << "\nData Type  Bytes"
		 << "\n---------  -----"
		 << "\nint            " << sizeof(int)
		 << "\nchar           " << sizeof(char)
		 << "\nbool           " << sizeof(bool)
		 << "\nfloat          " << sizeof(float)
		 << "\ndouble         " << sizeof(double)
		 << '\n';
		 
	return 0;
}
