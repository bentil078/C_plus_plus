#include <iostream>
#include <math.h>
#include <cstdlib>

using namespace std;

int main()
{
	cout << "Give initial guess " << endl;
	double x;
	cin >> x;
	double err, tol=10^(-3), x1;
	int it, maxit=100;

	it = 0;
	err = tol + 1;
	while( err > tol && it < maxit )
	{
		x1 = x - (x-2*cos(x))/(1+2*sin(x));
		err = fabs( x1 - x );
		x = x1;
		it++;
		}
	if( err <= tol )
	cout << "The root is " << x << endl;
	else
	cout << "Error, no convergence \n";
}