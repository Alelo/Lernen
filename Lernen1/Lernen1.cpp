#include "stdafx.h"
#include <iostream>

// F6 to build
// ctrl+F5 run + commandline

int main(){
	int days;
	days = 365;
	int months = 12;
	int averageday = days / months;

	std::cout << "The Average Month has " << averageday << " days" << std::endl;
	return 0;
}