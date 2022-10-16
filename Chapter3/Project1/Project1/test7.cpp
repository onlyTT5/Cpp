#include <iostream>
using namespace std;

const float kilo_mile = 62.14;
const float gallon_liter = 3.875;

int main()
{
	float eu;
	cout << "Please enter eu: ";
	cin >> eu;
	float gallon, mile;
	mile = kilo_mile;
	gallon = eu / gallon_liter;
	cout << eu << "mpg = " << mile / gallon << "/100km";

	return 0;
}