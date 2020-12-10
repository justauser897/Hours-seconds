#include <iostream>

int main()
{
	int hours, seconds;
	std::cout <<"Enter hours.";
	std::cin >> hours;
	seconds= (hours *60) *60;
	std::cout <<"The " << hours << " hours are " << seconds << " seconds.";
	
	return 0;
}
