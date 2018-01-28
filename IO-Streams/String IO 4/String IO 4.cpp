// String IO 4.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
	int ival = 1024; int *pival = &ival;
	double dval = 3.14159; double *pdval = &dval;

	// �������� ����� �� ����������, �� ������� ����������
	ostringstream format_string;

	format_string << ival << " " << pival << " "
		<< dval << " " << pdval << endl;

	// ����������� �������� �������� �  ASCII ��������
	// � ���������� � �������� ��'�����

	istringstream input_istring(format_string.str());

	input_istring >> ival >> pival >> dval >> (int)pdval;
}

