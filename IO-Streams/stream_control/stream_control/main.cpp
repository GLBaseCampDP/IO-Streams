#include <iostream>
#include <locale>
#include <fstream>
int main() {
  std::locale mylocale("en_US.UTF8");
  std::cout.imbue(mylocale);  // imbue global locale
  std::cout << 3.14159 << '\n';

  std::ostream *prevstr;
  std::ofstream ofs;
  ofs.open("test.txt");
  std::cout << "tie example:\n";
  // cin is tied to cout
  *std::cin.tie() << "This inserted into cout";
  prevstr = std::cin.tie(&ofs);
  *std::cin.tie() << "This inserted into the file";
  std::cin.tie(prevstr);
  ofs.close();
  return 0;
}
