#include <iostream>
using namespace std;

const int Feets_inches = 12;
const float Inches_meters = 0.0254;
const float Kg_pounds = 2.2;

int main()
{
	float feets, inches, pounds;
	cout << "Please enter your feets and inches: ";
	cin >> feets >> inches;
	cout << "Please enter your pounds: ";
	cin >> pounds;

	float meter, BMI, Total_inches, Kg;
	Total_inches = feets * Feets_inches + inches;
	meter = Total_inches * Inches_meters;
	Kg = Kg_pounds * pounds;
	BMI = Kg / (meter * meter);
	cout << "Your BMI is " << BMI << ".";

	return 0;
}