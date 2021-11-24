#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
	double base, exponent, result;
	
	base = 8;
	exponent = 4;
	result = pow(base, exponent);
	
	cout << base << "^" << exponent << " = " << result;
	
	return 0;
}
