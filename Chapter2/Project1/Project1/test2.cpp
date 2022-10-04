#include <iostream>
void fun1();
void fun2();

using namespace std;
int main()
{
	fun1();
	fun2();
	return 0;
}

void fun1()
{
	cout << "Three blind mice" << endl;
	cout << "Three blind mice" << endl;
}

void fun2()
{
	cout << "See how they run " << endl;
	cout << "See how they run " << endl;
}