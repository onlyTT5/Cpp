#include <iostream>
using namespace std;
const int Factor = 12;
int main()
{
	int height1, height2, height3;
	cout << "Please enter your height: ___\b\b\b";
	cin >> height1;
	height2 = height1 / Factor;
	height3 = height1 % Factor;
	
	cout << "Your height is " << height2 << " inches " << height3 << " feets " << endl;
	return 0;
}