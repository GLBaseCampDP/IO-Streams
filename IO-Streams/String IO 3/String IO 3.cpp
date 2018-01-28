// String IO 3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include <string> 
#include <fstream> 
#include <sstream>
#include <vector>
using namespace std;
string read_file_into_string() 
{ 
	ifstream ifile("alice_emma"); 
	ostringstream buf; 
	char ch; 
	while (buf && ifile.get(ch)) 
		buf.put(ch); 
	return buf.str(); 
}

int main()
{
	string text = read_file_into_string();

	// запомнить позиции каждого символа новой строки
	vector< string::size_type > v;
	string::size_type pos = 0;

	while (pos != string::npos)
	{
		pos = text.find('\n',pos);
		v.push_back(pos);
	}

	// ...

    return 0;
}


