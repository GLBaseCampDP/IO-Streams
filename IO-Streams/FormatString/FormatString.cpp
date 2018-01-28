// FormatString.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"

#include <iostream>
#include <sstream>
using namespace std;

int main()
{
	int ival = 1024; int *pival = &ival;
	double dval = 3.14159; double *pdval = &dval;

	ostringstream format_message;

	// ������������ ������� � �������� �������������
	format_message << "ival: " << ival
		<< " ������ ival: " << pival << '\n'
		<< "dval: " << dval << '\n'
		<< " ������ dval: " << pdval << endl;

	string msg = format_message.str();
	cout << " ����� ����� �����������: " << msg.size()
		<< " �����������:" << msg << endl;
}


