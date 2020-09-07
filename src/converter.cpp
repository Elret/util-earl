#include "converter.h"

std::string Converter::convert_binary_string(std::string input_string) {
  std::stringstream ss;
  std::string output_string;
  int input_string_length = input_string.length();
  LinkedList linked_list;
  linked_list.init();
  for (int i = 0; i < input_string_length; i + 8) {
    std::string char_buffer[8];
    int string_array_num = 0;
    for (int j = i; i < i+8; i++) {
      char_buffer[string_array_num] = input_string[j];
      string_array_num++;
    }
    linked_list.add_int_to_list(std::bitset<8>(char_buffer).to_ulong());
  }
  linked_list.current_to_start();
  while (!linked_list.is_node_at_end()) {
    
  }
  return output_string;
}

void Converter::LinkedList::init() {
  start = new node;
  current = start;
}

void Converter::LinkedList::current_to_start() {
  current = start;
}

bool Converter::LinkedList::is_node_at_end() {
  if (current->next = 0) {
    return true;
  }
}

void Converter::LinkedList::add_int_to_list(ulong add_int) {
  while(current->next!=0) {
    current = current->next;
  }
  current->x=add_int;
  current->next = new node;
}

bool Converter::LinkedList::read_list() {
  
  

}