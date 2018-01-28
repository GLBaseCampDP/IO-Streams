// UserMAnipulyators 3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;
class plusone_stream : public std::ostream
{
public:
	std::ostream& operator<<(int i)
	{
		*this << i + 1;
		return *this;
	}
};

std::ostream& plusone(std::ostream& s)
{
	return plusone_stream(out);
}

int main()
{
    return 0;
}

