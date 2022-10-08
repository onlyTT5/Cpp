#include <iostream>
using namespace std;
int main()
{
    int chest = 42;
    int waist = 42;
    int inseam = 42;

    cout << "Monsieur cuts a astriking figure!" << endl;
    cout << "chest = " << chest << "(decimal for 42)" << endl;
    cout << hex;
    cout << "waitst = " << waist << " (hexadecimal for 42)" << endl;
    cout << oct;
    cout << "inseam = " << inseam << " (octal for 42)" << endl;
    return 0;
}