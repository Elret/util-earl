#ifndef CONVERTER_H
#define CONVERTER_H

#include <bitset>
#include <string>
#include <sstream>



class Converter {
private:
class node {
  public:
  ulong x;
  node *next = 0;
};

class LinkedList {
  private:
  node *start;
  node *current;

  public:
  void init();
  void current_to_start();
  bool is_node_at_end();
  void add_int_to_list(ulong);
  bool read_list();
};

public:
std::string convert_binary_string(std::string);

};

#endif