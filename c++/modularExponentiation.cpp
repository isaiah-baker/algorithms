#include <iostream>
#include <cmath>

using namespace std;

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

int main()
{
    int x,y,N;
    cout << "x^y MOD N"<< endl;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
    cout << "Enter N: ";
    cin >> N;
    
    int out = modexp(x,y,N);

    cout << x <<"^" << y << " MOD " << N << " is equal to "<< out << endl;

}