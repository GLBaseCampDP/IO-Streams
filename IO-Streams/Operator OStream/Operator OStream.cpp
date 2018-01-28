// Operator OStream.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include <iostream>
using namespace std;

struct A {
	int x, y;
public:
	A(int i, int j) { x = i;  y = j; }
	friend ostream& operator<<(ostream&, A&);
};

ostream& operator<<(ostream& stream, A& a) {
	stream << a.x << a.y << endl;
	return stream;
}

int main() {
	A a(1, 1), b(1, 10);
	cout << a << b;
	return 0;
}

