#include <iostream>
using namespace std;
int main() {
  std::cout.width(10);
  std::cout.fill('%');
  std::cout.setf(ios::right);
  std::cout << "Wow\n";
  // встановлені параметри будуть скинуті
  std::cout.precision(10);
  std::cout << 1.2 << '\n';
  return 0;
}
