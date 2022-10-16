#include <iostream>
using namespace std;

const int Day_hour = 24;
const int Hour_min = 60;
const int Min_sec = 60;

int main()
{
	int num, day, hour, min, sec;
	cout << "Enter the number of seconds: ";
	cin >> num;
	int num_re;
	day = num / (Day_hour * Hour_min * Min_sec);
	num_re = num % (Day_hour * Hour_min * Min_sec);
	hour = num_re / (Hour_min * Min_sec);
	num_re = num_re % (Hour_min * Min_sec);
	min = num_re / Min_sec;
	sec = num_re % Min_sec;
	cout << num << " seconds = " << day << " days, " << hour << " hours, " << min << " minutes, " << sec << " seconds.";

	return 0;
}