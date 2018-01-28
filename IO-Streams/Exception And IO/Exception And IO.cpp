// Exception And IO.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include <iostream>
#include <fstream>

int main()
{
	int ivalue;
	try {
		std::ifstream in("in.txt");
		in.exceptions(std::ifstream::failbit);
		in >> ivalue;
	}
	catch (std::ios_base::failure &fail) {
		std::cout << fail.what() << '\n'
			<< "Error code: " << fail.code();
		// обробка виключення, яке було згенеровано внаслідок настання стану failbit
	}
}
