#include "earl.h"

int main()
{
  File_system fs;
  fs.from_file_to_string();
  Converter conv;
  std::cout << conv.convert_binary_string(fs.return_input_string());
}