#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
int ival = 1024; int *pival = &ival;
double dval = 3.14159;
double *pdval = &dval;
// будується рядок із значеннями,
// які розділені пропусками
ostringstream format_string;

format_string << ival << " " << pival << " "
  << dval << " " << pdval << endl;
// вибираються збережені значення у  ASCII кодуванні
// і розміщуться у чотирьох об'єктах

istringstream input_istring(format_string.str());
input_istring >> ival >> *pival >> dval >> *pdval;
}
