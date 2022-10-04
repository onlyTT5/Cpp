#include <iostream>
int convert(double);
using namespace std;
int main()
{
	cout << "Please enter a Celsius value: ";
	double degree;
	cin >> degree;
	double convertdegree;
	convertdegree = convert(degree);
	cout << degree << " degrees Celsius is 68 degres Fahrenheit";
	return 0;
}

int convert(double degree)
{
	return 1.8 * degree + 32.0;
}