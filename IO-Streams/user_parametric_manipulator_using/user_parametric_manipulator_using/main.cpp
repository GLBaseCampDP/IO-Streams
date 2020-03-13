#include <iostream>
#include <iomanip>
using namespace std;
#define DTOR(S) { cout << "dtor "<< S <<" \n";}
#define END return s; }

struct manip {
  char c;
  int w;
  double d;
  manip(char i):c(i),w(0),d(0) DTOR("manip(char)")
  manip(char i, int s) :c(i), w(s), d(0)
    DTOR("manip(char, int)")
  manip* operator ()(char c, int w, double d) {
    this->c = c;   this->w = w;   this->d = d;
    return this;
  }
};
ostream& operator << (ostream& s, manip&& m) { //1
  s <<"&&: "<< setfill(m.c) << setw(m.w) << right ;
END

ostream& operator << (ostream& s, manip* p) { //2
  s << "*: " << setfill(p->c) << setw(p->w) <<
  p->d << right;
END

ostream& operator << (ostream&s, const manip& m){ //3
  s << "&: " << setfill(m.c) << setw(100) << left;
END

int main() {
  cout << manip('#', 10)<< 1.2 << endl; //1
  manip m('*');
  cout << m << 1.2 << endl; ; //3
  cout << m ('#', 10, 1.2) << endl; ; //2
}
