#include "stdafx.h"
#include <iostream>

// F6 to build
// ctrl+F5 run + commandline
// void function () for operatin in itself
// int function () for returning a string

int main(){
	std::cout << "How many days does a year have? :";
	int daysinyear;
	std::cin >> daysinyear;
	std::cout << "A year has " << daysinyear << "days, " << daysinyear / 7 << " weeks, " << daysinyear / 12 << " average days a month" << std::endl;
	return 0;
}