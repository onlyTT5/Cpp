#include <iostream>
using namespace std;

const int Deg_min = 60;
const int Min_sec = 60;

int main()
{
	cout << "Enter a latitude in degress, minutes, and seconds" << endl;
	float degrees, minutes, seconds, value;
	cout << "First, enter the degrees: ";
	cin >> degrees;
	cout << "Next, enter the minutes of arc: ";
	cin >> minutes;
	cout << "Finally, enter the seconds of arc: ";
	cin >> seconds;
	value = degrees + minutes / 60 + seconds / 60 * 0.1;
	cout << degrees << " degrees, " << minutes << " minutes " << seconds << " seconds = " << value << " degrees.";

	return 0;
}