// GetCharExample.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"

#include <iostream>
using namespace std;
int main(){
	const int max_line = 1024;
	char line[max_line];

	while (cin.get(line, max_line))	{
		// �������� �� ����� max_line - 1 �������,
		// ��� ����, �� �������� ���� ��� \0
		int get_count = cin.gcount();
		cout << "Readed char count : "<< get_count << endl;

		// ������ �� line

		// ���� ������ ������ �����, 
		//�� �������� ���� � ������ ����� �����
		if (get_count < max_line - 1)
			cin.ignore();
	}
}







