#include <iostream>
using namespace std;

class A {
  int x, y;
  public:
    A(int i, int j) { x = i;  y = j; }
    friend ostream& operator<<(ostream&, A&);
};

ostream& operator<<(ostream& s, A& a) {
  s << a.x << a.y << endl;
  return s;
}

int main() {
  A a(1, 1), b(1, 10);
  cout << a << b;
  return 0;
}
