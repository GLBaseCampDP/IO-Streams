#include <iostream>
using namespace std;

ostream& setup(ostream& s){
  s.width(10);
  s.fill('#');
  return s;
}

int main() {
  cout << setup << 1;
  return 0;
}
