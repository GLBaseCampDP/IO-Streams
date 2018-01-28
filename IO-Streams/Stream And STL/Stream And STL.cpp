// Stream And STL.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main() {
	
	string name;

	cout << "Source file: ";
	cin >> name;

	// Об'єкт ifstream вводу з файлу
	ifstream in(name.c_str());

	if (!in) {
		cerr << "Opening error: "<< name << endl;
		return 1;
	}

	string name_o = name + ".sort";

	// Об'єкт ofstream виводу у файл
	ofstream out(name_o.c_str());
	if (!out) {
		cerr << "Opening error: " << name_o << endl;
		return 2;
	}

	string buffer;
	vector< string > text;

	int cnt = 1;
	while (in >> buffer) {
		text.push_back(buffer);
		cout << buffer << (cnt++ % 8 ? " " : "\n");
	}

	sort(text.begin(), text.end());

	// вивід результату у файл
	vector<string >::iterator iter = text.begin();

	for (cnt = 1; iter != text.end(); ++iter, ++cnt)
		out << *iter << (cnt % 8 ? " " : "\n");

	return 0;
}


