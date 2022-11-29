#include <iostream>
#include <string>
#include "font_colossal.cpp"

int main(int argc,char *argv[]) {
  if (argc != 2) {
    std::cout << "Please enter exactly one input string";
  }

  std::string s = argv[1];
  font_colossal::printascii(s);

  return 0;
}
