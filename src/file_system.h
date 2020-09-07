#ifndef FILE_SYSTEM_H
#define FILE_SYSTEM_H

#include <fstream>
#include <string>
#include <iostream>

class File_system {
  private:
  std::string input_string = "";

  public:
  bool from_file_to_string();
  bool from_string_to_file(std::string);
  std::string return_input_string();
};

#endif