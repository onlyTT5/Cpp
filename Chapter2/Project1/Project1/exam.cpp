#include <iostream>
using namespace std;
void display(int, int);
int main()
{
	cout << "Enter the number of hours: ";
	int hour;
	cin >> hour;
	cout << "Enter the number of minutes: ";
	int min;
	cin >> min;
	display(hour, min);
	return 0;
}

void display(int hour, int min)
{
	cout << "Time: " << hour << ":" << min;
}