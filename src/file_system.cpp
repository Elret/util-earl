#include "file_system.h"

bool File_system::from_file_to_string() {
  std::ifstream file;
  file.open("input.txt");
  if (file.is_open()) {
    std::string line;
    while (getline(file, line)) {
      input_string.append(line);
      //todo: Add ability to read line breaks.
    }
      file.close();
  }
  else
  return false;

  return true;
}

bool File_system::from_string_to_file(std::string output_string) {
  return true;
}

std::string File_system::return_input_string() {
  return input_string;
}

