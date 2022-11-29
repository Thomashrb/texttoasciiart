#include "font_colossal.hpp"

#include <cctype>
#include <cstdio>
#include <iostream>
#include <array>

namespace font_colossal {

  // TODO: implement uppercase
  std::array<std::array<char, font_colossal::FONT_WIDTH>, font_colossal::FONT_HEIGHT> toasciiart(char c) {
    switch (tolower(c)) {
      case 'a':
        return font_colossal::A;
      case 'b':
        return font_colossal::B;
      case 'c':
        return font_colossal::C;
      case 'd':
        return font_colossal::D;
      case 'e':
        return font_colossal::E;
      case 'f':
        return font_colossal::F;
      case 'g':
        return font_colossal::G;
      case 'h':
        return font_colossal::H;
      case 'i':
        return font_colossal::I;
      case 'j':
        return font_colossal::J;
      case 'k':
        return font_colossal::K;
      case 'l':
        return font_colossal::L;
      case 'm':
        return font_colossal::M;
      case 'n':
        return font_colossal::N;
      case 'o':
        return font_colossal::O;
      case 'p':
        return font_colossal::P;
      case 'q':
        return font_colossal::Q;
      case 'r':
        return font_colossal::R;
      case 's':
        return font_colossal::S;
      case 't':
        return font_colossal::T;
      case 'u':
        return font_colossal::U;
      case 'v':
        return font_colossal::V;
      case 'w':
        return font_colossal::W;
      case 'x':
        return font_colossal::X;
      case 'y':
        return font_colossal::Y;
      case 'z':
        return font_colossal::Z;
      default:
        return font_colossal::BLOCK;
    }
  }

  void printascii(std::string s){
    std::array<std::array<char, font_colossal::FONT_WIDTH>, font_colossal::FONT_HEIGHT> asciichar;
    for(int h = 0; h < font_colossal::FONT_HEIGHT; h++) {
      for (char c:s) {
        std::cout << toasciiart(c).at(h).data();
      }
      std::cout << "\n";
    }
  }
}
