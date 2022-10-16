#include <iostream>
using namespace std;
int main()
{
	long long All_pop, Cin_pop;
	double results;
	cout << "Enter the world's population: ";
	cin >> All_pop;
	cout << "Enter the popluation of the China: ";
	cin >> Cin_pop;
	results = double(Cin_pop) / double(All_pop) * 100;
	cout << "The popluation of the US is " << results << "% of the world population.";

	return 0;
}