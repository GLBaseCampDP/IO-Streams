#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  const int bufSize = 24;
  char buf[bufSize];
  char *pbuf = buf;

  while (cin >> setw(sizeof(pbuf)) >> pbuf)
    cout << pbuf <<endl;
}
