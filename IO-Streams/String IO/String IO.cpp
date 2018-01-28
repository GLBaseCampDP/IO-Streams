// String IO.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <sstream>
//#include <iostream>

using namespace std;

string program_name("our_program");
string version("0.01");


string error_format(int *array, int size) {
	if (!array) {
		ostringstream message;

		message << "Error: "
			<< program_name << "--" << version
			<< ": " << __FILE__ << ": " << __LINE__
			<< " -- pointer is zero; "
			<< " but must be non zero\n";
		// поверенння рядка
		return message.str();
	}
	else
		return "";
}


int main()
{
    return 0;
}

