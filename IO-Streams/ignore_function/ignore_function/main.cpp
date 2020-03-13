#include <iostream>
using namespace std;

int main(){
  const int max_line = 1024;
  char line[max_line];

  while (cin.get(line, max_line)){
      // читається не більше max_line - 1 символів,
      // для того, що залишити місце для \0
         unsigned get_count = cin.gcount();
         cout << "Readed char count : "<< get_count;
      // робота із line
      // якщо символ нового рядка,
      //то видалити його і читати новий рядок
        if (get_count < max_line - 1)
            cin.ignore();
  }
}
