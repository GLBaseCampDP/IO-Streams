// UserMAnipulyators.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"

#include <iostream>

using namespace std;
ostream& setup(ostream& s)
{
	s.width(10);
	s.fill('#');
	return s;
}

int main()
{
	cout << setup << 1;
	system("pause");
    return 0;
}

