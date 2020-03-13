#include <iostream>
#include <fstream>

int main() {
  int ivalue;
  try {
    std::ifstream in("in.txt");
    in.exceptions(std::ifstream::failbit);
    in >> ivalue;
  }
  catch (std::ios_base::failure &fail) {
// обробка виключення, яке було згенеровано
// внаслідок настання стану failbit
    std::cout << fail.what() << '\n'
      << "Error code: " << fail.code();
  }
}
