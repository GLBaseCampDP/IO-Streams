// String IO 2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <string>
#include <algorithm>
#include <iterator>
#include <vector>
#include <iostream>

using namespace std;

bool mless(string& s1, string& s2) {
	return s1.size() < s2.size();
}

template <class InputIterator>
void filter(InputIterator first, InputIterator last,
	string filt_elems = string("\",."))
{
	for (; first != last; first++)
	{
		string::size_type pos = 0;
		while ((pos = (*first).find_first_of(filt_elems, pos))
			!= string::npos)
			(*first).erase(pos, 1);
	}
}


int main() {
	istream_iterator< string > in(cin), eos;

	vector< string > text;

	copy(in, eos, back_inserter(text));

	string filt_elems("\",.;:");
	filter(text.begin(), text.end(), filt_elems);

	vector< string >::iterator max = 
		max_element(text.begin(), text.end(), mless);

	cout << "Words count "
		<< text.size() << endl;

	cout << " Max length "
		<< max->size() << endl;

	cout << " Word of Max length "
		<< *max << endl;
}
