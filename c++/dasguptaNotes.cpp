// algsDasgupta.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>


using namespace std;

// Quadratic time multiplication O(n^2)
int multiply(int x, int y) {
	if (y == 0) {
		return 0;
	}
	int z = multiply(x, (y / 2));

	if (y % 2 == 0) {
		return 2*z;
	}
	else {
		return x + 2*z;
	}
}


// Division 
int divide(int x, int y) {
	int q, r;
	if (x == 0)
		return (q, r) = (0, 0);
	int q = 2 * q;
	int r = 2 * r;
	if (x % 2 != 0) {
		r = r + 1;
	}
	if (r >= y)
	{
		r = r - y;
		q = q + 1;
	}
}


int z;
int modexp(int x, int y, int N) {
	if (y == 0) {
		return 1;
	}

	z = modexp(x, (y / 2), N);
	
	if (y % 2 == 0) {
		return (int)pow(z, 2) % N;
	}	
	else {
		return x * (int)pow(z, 2) % N;
	}
}

// 1.5 Euclid GCD
int gcd(int a, int b) {
	if (b == 0)
		return a;
	return gcd(b, a % b);
}




int main()
{

}

