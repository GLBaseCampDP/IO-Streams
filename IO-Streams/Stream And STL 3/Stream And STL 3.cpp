// Stream And STL 3.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"

#include <algorithm>
#include <string>
#include <vector>
#include <iostream>
#include <iterator>  

using namespace std;

int main()
{
	istream_iterator< string > in(cin), eos;
	vector< string > text;
	// ������� ������ �������� ������ � ������ text
	copy(in, eos, back_inserter(text));
	sort(text.begin(), text.end());

	// ��������� ���������
	vector< string >::iterator it;
	it = unique(text.begin(), text.end());
	text.erase(it, text.end());

	// ���� ���������� ������
	int line_cnt = 1;
	for (vector< string >::iterator iter = text.begin();
		iter != text.end(); ++iter, ++line_cnt)
		cout << *iter << (line_cnt % 9 ? " " : " \n");
		cout << endl;
}


