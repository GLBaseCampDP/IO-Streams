#include <sstream>
using namespace std;
string program_name("our_program");
string version("0.01");

string error_format(int *array, int size) {
  if (!array) {
    ostringstream message;
    message << "Error: "
      << program_name << "--" << version
      << ": " << __FILE__ << ": " << __LINE__
      << " -- pointer is zero; "
      << " but must be non zero\n";
    // повернення рядка
    return message.str();
  }
  else
    return "";
}
