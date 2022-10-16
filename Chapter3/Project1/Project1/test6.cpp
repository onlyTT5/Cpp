#include <iostream>
using namespace std;
int main()
{
	float miles, gallons;
	cout << "Please enter the distance(mile): ";
	cin >> miles;
	cout << "Please enter the gasoline amount(gallon):";
	cin >> gallons;
	cout << "Wasting a gallon gasoline run " << miles / gallons << " miles.\n";
	int number;
	cout << "You want to kilomer? If you want, please enter 1:";
	cin >> number;
	if (number == 1)
	{
		float kilos, liters;
		cout << "Please enter the distance(kilometers): ";
		cin >> kilos;
		cout << "Please enter the gasoline amount(liters): ";
		cin >> liters;
		cout << "Wasting a gallon gasoline run: " << liters / kilos * 100 << " miles.\n";
	}

	return 0;
}