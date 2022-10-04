#include <iostream>
int convert(double);
using namespace std;
int main()
{
	cout << "Enter the number of light years: ";
	double dist1;
	cin >> dist1;
	double dist2;
	dist2 = convert(dist1);
	cout << dist1 << " light years = " << dist2 << " astronomical units" << endl;

	return 0;
}

int convert(double dist1)
{
	return dist1 * 63240;
}