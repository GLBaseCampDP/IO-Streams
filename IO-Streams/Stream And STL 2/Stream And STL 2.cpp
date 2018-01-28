// Stream And STL 2.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <iterator>  
#include <algorithm>
using namespace std;

string week[] = {
	"Sunday", "Monday", "Friday"
};
 
int main() {
	vector<string> v(week, week+3);

	vector<string>::iterator it_b = v.begin();
	vector<string>::iterator it_e = v.end();

	cout << "This Week New Standart: ";

	// �������� ������ ������� � cout ...
	ostream_iterator<string > out(cout, " ");
	copy(it_b, it_e, out);

	cout << endl;
}

