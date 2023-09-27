#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x;
	double y;
	double A;
	double B;

	cout << "x = "; cin >> x;

	A = 2 * abs(x - 5);

	if (x < -1)
		B = (sin(x) * sin(x)) / (1 + abs(cos(x)));
	if (-1 <= x && x <= 1)
		B = cos( 1 / abs(x + 2) ) * cos( 1 / abs(x + 2) );
	if (x > 1)
		B = log(x + 2);

	y = A - B;
	
	cout << "1) y = " << y << endl;

	if (x < -1)
		B = (sin(x) * sin(x)) / (1 + abs(cos(x)));
	else 
			if (x > 1)
				B = log(x + 2);
			else 
				B = cos(1 / abs(x + 2)) * cos(1 / abs(x + 2));

	cout << "2) y = " << y << endl;

}