#include "font_colossal.hpp"

#include <iostream>
#include <sstream>
#include <string>
#include <vector>

namespace font_colossal
{

// TODO: implement uppercase
const std::string* toasciiart(char c)
{
  switch (tolower(c))
  {
    case ' ':
      return &font_colossal::SPACE;
    case 'a':
      return &font_colossal::LOWER_A;
    case 'b':
      return &font_colossal::LOWER_B;
    case 'c':
      return &font_colossal::LOWER_C;
    case 'd':
      return &font_colossal::LOWER_D;
    case 'e':
      return &font_colossal::LOWER_E;
    case 'f':
      return &font_colossal::LOWER_F;
    case 'g':
      return &font_colossal::LOWER_G;
    case 'h':
      return &font_colossal::LOWER_H;
    case 'i':
      return &font_colossal::LOWER_I;
    case 'j':
      return &font_colossal::LOWER_J;
    case 'k':
      return &font_colossal::LOWER_K;
    case 'l':
      return &font_colossal::LOWER_L;
    case 'm':
      return &font_colossal::LOWER_M;
    case 'n':
      return &font_colossal::LOWER_N;
    case 'o':
      return &font_colossal::LOWER_O;
    case 'p':
      return &font_colossal::LOWER_P;
    case 'q':
      return &font_colossal::LOWER_Q;
    case 'r':
      return &font_colossal::LOWER_R;
    case 's':
      return &font_colossal::LOWER_S;
    case 't':
      return &font_colossal::LOWER_T;
    case 'u':
      return &font_colossal::LOWER_U;
    case 'v':
      return &font_colossal::LOWER_V;
    case 'w':
      return &font_colossal::LOWER_W;
    case 'x':
      return &font_colossal::LOWER_X;
    case 'y':
      return &font_colossal::LOWER_Y;
    case 'z':
      return &font_colossal::LOWER_Z;
    default:
      return &font_colossal::BLOCK;
  }
}

const std::vector<std::string> split(const std::string input, const char delim)
{
  auto ss = std::stringstream{input};

  auto result = std::vector<std::string>{};
  for (std::string line; std::getline(ss, line, delim);)
  {
    result.push_back(line);
  }
  return result;
}

void printascii(std::string s)
{
  std::string                           asciichar;
  std::vector<std::vector<std::string>> asciichars;
  for (char c : s)
  {
    asciichar = *toasciiart(c);
    asciichars.push_back(split(asciichar, '\n'));
  }

  for (int h = 0; h < font_colossal::FONT_HEIGHT; h++)
  {
    for (std::vector<std::string> c : asciichars)
    {
      std::cout << c.at(h);
      std::cout << " ";
    }
    std::cout << "\n";
  }
}
}  // namespace font_colossal
