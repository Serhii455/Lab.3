// Lab_03_2.cpp
// Максимів Сергій Володимирович
// Лабораторна робота № 3.2
// Розгалуження, задане формулою: функція з параметрами.
// Варіант 13


#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x;
	double a;
	double b;
	double c;
	double F;


	cout << "x = "; cin >> x;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;


	if ((x - 1) < 0 && (b - x) != 0)
		F = a * x * x + b;
	if ((x - 1) > 0 && (b + x) == 0)
		F = (x - a) / x;
	if (!(x < 0 && (b - x) != 0) && !((x - 1) > 0 && (b + x) == 0))
		F = -x / c + (-c) / (2 * x + 1);



	cout << endl;
	cout << "1) F = " << F << endl;

	if ((x - 1) < 0 && (b - x) != 0)
		F = a * x * x + b;
	else
		if ((x - 1) > 0 && (b + x) == 0)
			F = (x - a) / x;
		else
			F = -x / c + (-c) / (2 * x + 1);

	cout << "2) F = " << F << endl;


	cin.get();
	return 0;
}