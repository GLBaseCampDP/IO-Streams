// FormatFunction.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	std::cout.width(10);
	std::cout.fill('%');
	std::cout.setf(ios::right);
	std::cout << "Wow\n";
	// ������������ ��������� ������ �������
	std::cout.precision(10);
	std::cout << 1.2 << '\n';
	system("pause");
	return 0;
}
