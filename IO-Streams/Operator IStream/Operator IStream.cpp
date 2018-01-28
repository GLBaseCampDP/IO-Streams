// Operator IStream.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"

#include <iostream>
using namespace std;
class A {
	int x, y;
public:
	A(int i, int j) { x = i;  y = j; }
	friend istream& operator >> (istream&, A&);
};
istream& operator >> (istream& s, A& a)
{

	s >> a.x >> a.y;
	return s;
}

int main(){
	A a(1, 1), b(1, 10);
	cin >> a >> b;
	return 0;
}

