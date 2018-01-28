// File IO 2.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	fstream InOut("copy.out", ios_base::in | ios_base::app);
	int cnt = 0;
	char ch;

	InOut.seekg(0);

	while (InOut.get(ch)) {
		cout.put(ch);
		cnt++;

		if (ch == '\n') {
			// �����'������� ������� �������
			ios::pos_type mark = InOut.tellg();
			InOut << cnt << ' ';
			InOut.seekg(mark); // ���������� �������
		}
	}
	InOut.clear();
	InOut << cnt << endl;
	cout << "[ " << cnt << " ]\n";

	return 0;
}










