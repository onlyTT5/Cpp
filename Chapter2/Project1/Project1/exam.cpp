#include <iostream>
void input(int, int);
using namespace std;
int main()
{
	int hours, minutes;
	cout << "Enter the number of hours: ";
	cin >> hours;
	cout << "Enter the number of minute: ";
	cin >> minutes;
	input(hours, minutes);
	return 0;
}

void input(int hours, int minutes)
{
	cout << "Time: " << hours << ":" << minutes;
}