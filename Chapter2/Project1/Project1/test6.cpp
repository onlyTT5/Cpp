#include <iostream>
using namespace std;
void display(int, int);
int main()
{
	cout << "Enter the number of hours; ";
	int hour;
	cin >> hour;
	cout << "Enter the number of minutes: ";
	int minute;
	cin >> minute;
	display(hour, minute);
	return 0;
}

void display(int hour, int minute)
{
	cout << "Time: " << hour << ":" << minute << endl;
}