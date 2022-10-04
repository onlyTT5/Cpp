#include <iostream>
using namespace std;
int convert(int);
int main()
{
	cout << "Enter your age: ";
	int age;
	cin >> age;
	int month;
	month = convert(age);
	cout << "It means " << month << "months" << endl;
	return 0;
}

int convert(int age)
{
	return 12 * age;
}