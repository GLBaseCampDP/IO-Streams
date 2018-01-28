// Char string and fixed buffer.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include <iostream> 
#include <iomanip>
using namespace std;



int main()
{
	const int bufSize = 24;
	char buf[bufSize];
	char *pbuf = buf;

	// для хранения статистики
	
	while (cin >> setw(sizeof(pbuf)) >> pbuf)
		cout << pbuf <<endl;

	
}

