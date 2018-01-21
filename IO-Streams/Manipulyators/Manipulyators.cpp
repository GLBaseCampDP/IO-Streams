// Manipulyators.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include <iostream>

#include <iomanip>

using namespace std;
int main()
{
	cout << setw(10) << "Woow";
	cout << setfill('%') << setprecision(10) << 1.2 << endl;
	return 0;

}
