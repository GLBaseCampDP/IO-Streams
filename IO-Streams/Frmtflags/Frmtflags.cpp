// Frmtflags.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include <iostream>

using namespace std;

int main() {
	
	ios::fmtflags f;
	f = cout.flags();
	if (f && ios::left) // перевірка left маски
		cout << "left-mast is switch on\n";
	else
	{
		cout << "left-mast is switch off\n";
		// встановлення left маски
		cout.setf(ios::left);
	}
	// встановлення ще двох масок через setf
	cout.setf(ios::dec | ios::showpos);
	ios::fmtflags t = ios::showpoint | ios::skipws;
	// встановлення ще двох масок через flags
	cout.flags(t);
	return 0;
}




