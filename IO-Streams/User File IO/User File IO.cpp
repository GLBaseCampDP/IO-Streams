// User File IO.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include <iostream>
#include <fstream>
using namespace std;

class A {
	int x, y;
public:
	A(int i, int j): x(i), y(j) {}
	friend ostream& operator<< (ostream&, A&);
};

ostream& operator<< (ostream &s, A& a) {
	return s << a.x << ", " << a.y << endl;
}
int main() {
	A a(5, 10), b(10, 5);
	ofstream fout("Test.txt");
	if (!fout) 	{
		cout << "Open error";
		return 1;
	}
	fout << a << b;
	fout.close();
	return 0;
}

