// Frmtflags.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"

#include <iostream>

using namespace std;

int main() {
	
	ios::fmtflags f;
	f = cout.flags();
	if (f && ios::left) // �������� left �����
		cout << "left-mast is switch on\n";
	else
	{
		cout << "left-mast is switch off\n";
		// ������������ left �����
		cout.setf(ios::left);
	}
	// ������������ �� ���� ����� ����� setf
	cout.setf(ios::dec | ios::showpos);
	ios::fmtflags t = ios::showpoint | ios::skipws;
	// ������������ �� ���� ����� ����� flags
	cout.flags(t);
	return 0;
}




