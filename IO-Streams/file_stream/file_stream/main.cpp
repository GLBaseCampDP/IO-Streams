#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
  string in, out;
  cout << "Source file: "; cin >> in;
  cout << "Destination file: "; cin >> out;

  ifstream fin(in); // відкриття файла для вводу
  ofstream fout(out); // відкриття файла для виводу
  if (!fout) {
    cout << "Error of " << out << " opening\n";
    return 1;
  }
  if (!fin) {
      cout << "Error of " << in << " opening\n";
      return 1;
    }

    char c, cIn, cOut;
    cout << "\nSearch char: ";  cin >> cIn;
    cout << "\nReplace char: ";cin >> cOut;
    fin.unsetf(ios::skipws);
    while (!fin.eof()) {      // цикл заміни
      fin >> c;
      if (c == cIn) c = cOut;
      if (!fin.eof()) fout << c;
    }
    fin.close();
    fout.close();
    return 0;
  }
