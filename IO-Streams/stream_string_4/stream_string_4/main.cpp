#include <iostream>
#include <sstream>
using namespace std;

int main() {
  int ival = 1024; int *pival = &ival;
  double dval = 3.14159; double *pdval = &dval;

  ostringstream format_message;
  // перетворення значень в стрінгове представлення
    format_message << "ival: " << ival
     << " адреса ival: " << pival << '\n'
     << "dval: " << dval << '\n'
     << " адреса dval: " << pdval << endl;

    string msg = format_message.str();
    cout << " розмір рядка повідомлення: " <<
      msg.size() << " повідомлення:" << msg << endl;
  }
