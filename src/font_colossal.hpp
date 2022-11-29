#ifndef FONT_COLOSSAL_HPP
#define FONT_COLOSSAL_HPP

#include <string>
#include <array>

namespace font_colossal {
  void printascii(std::string);

  const uint8_t FONT_HEIGHT = 11;
  const uint8_t FONT_WIDTH = 9;

  const std::array<std::array<char, FONT_WIDTH>, FONT_HEIGHT> BLOCK =
  { ".d8888b.",
    ".d8888b.",
    ".d8888b.",
    ".d8888b.",
    ".d8888b.",
    ".d8888b.",
    ".d8888b.",
    ".d8888b.",
    ".d8888b.",
    ".d8888b.",
    ".d8888b.",
  };

  const std::array<std::array<char, FONT_WIDTH>, FONT_HEIGHT> A =
  { "        ",
    "        ",
    "        ",
    " 8888b. ",
    "    \"88b",
    ".d888888",
    "888  888",
    "\"Y888888",
    "        ",
    "        ",
    "        ",
  };

  const std::array<std::array<char, FONT_WIDTH>, FONT_HEIGHT> B =
  { "888     ",
    "888     ",
    "888     ",
    "88888b. ",
    "888 \"88b",
    "888  888",
    "888 d88P",
    "88888P\" ",
    "        ",
    "        ",
    "        ",
  };

  // FIXME implement
  const std::array<std::array<char, FONT_WIDTH>, FONT_HEIGHT> C = A;
  const std::array<std::array<char, FONT_WIDTH>, FONT_HEIGHT> D = A;
  const std::array<std::array<char, FONT_WIDTH>, FONT_HEIGHT> E = A;
  const std::array<std::array<char, FONT_WIDTH>, FONT_HEIGHT> F = A;
  const std::array<std::array<char, FONT_WIDTH>, FONT_HEIGHT> G = A;
  const std::array<std::array<char, FONT_WIDTH>, FONT_HEIGHT> H = A;
  const std::array<std::array<char, FONT_WIDTH>, FONT_HEIGHT> I = A;
  const std::array<std::array<char, FONT_WIDTH>, FONT_HEIGHT> J = A;
  const std::array<std::array<char, FONT_WIDTH>, FONT_HEIGHT> K = A;
  const std::array<std::array<char, FONT_WIDTH>, FONT_HEIGHT> L = A;
  const std::array<std::array<char, FONT_WIDTH>, FONT_HEIGHT> M = A;
  const std::array<std::array<char, FONT_WIDTH>, FONT_HEIGHT> N = A;
  const std::array<std::array<char, FONT_WIDTH>, FONT_HEIGHT> O = A;
  const std::array<std::array<char, FONT_WIDTH>, FONT_HEIGHT> P = A;
  const std::array<std::array<char, FONT_WIDTH>, FONT_HEIGHT> Q = A;
  const std::array<std::array<char, FONT_WIDTH>, FONT_HEIGHT> R = A;
  const std::array<std::array<char, FONT_WIDTH>, FONT_HEIGHT> S = A;
  const std::array<std::array<char, FONT_WIDTH>, FONT_HEIGHT> T = A;
  const std::array<std::array<char, FONT_WIDTH>, FONT_HEIGHT> U = A;
  const std::array<std::array<char, FONT_WIDTH>, FONT_HEIGHT> V = A;
  const std::array<std::array<char, FONT_WIDTH>, FONT_HEIGHT> W = A;
  const std::array<std::array<char, FONT_WIDTH>, FONT_HEIGHT> X = A;
  const std::array<std::array<char, FONT_WIDTH>, FONT_HEIGHT> Y = A;
  const std::array<std::array<char, FONT_WIDTH>, FONT_HEIGHT> Z = A;
}

#endif // FONT_COLOSSAL_HPP

//         888                   888           .d888         888      d8b  d8b 888      888                                                                    888
//         888                   888          d88P"          888      Y8P  Y8P 888      888                                                                    888
//         888                   888          888            888               888      888                                                                    888
// 8888b.  88888b.   .d8888b .d88888  .d88b.  888888 .d88b.  88888b.  888 8888 888  888 888 88888b.d88b.  88888b.   .d88b.  88888b.   .d88888 888d888 .d8888b  888888 888  888 888  888 888  888  888 888  888 888  888 88888888
//    "88b 888 "88b d88P"   d88" 888 d8P  Y8b 888   d88P"88b 888 "88b 888 "888 888 .88P 888 888 "888 "88b 888 "88b d88""88b 888 "88b d88" 888 888P"   88K      888    888  888 888  888 888  888  888 `Y8bd8P' 888  888    d88P
//.d888888 888  888 888     888  888 88888888 888   888  888 888  888 888  888 888888K  888 888  888  888 888  888 888  888 888  888 888  888 888     "Y8888b. 888    888  888 Y88  88P 888  888  888   X88K   888  888   d88P
//888  888 888 d88P Y88b.   Y88b 888 Y8b.     888   Y88b 888 888  888 888  888 888 "88b 888 888  888  888 888  888 Y88..88P 888 d88P Y88b 888 888          X88 Y88b.  Y88b 888  Y8bd8P  Y88b 888 d88P .d8""8b. Y88b 888  d88P
//"Y888888 88888P"   "Y8888P "Y88888  "Y8888  888    "Y88888 888  888 888  888 888  888 888 888  888  888 888  888  "Y88P"  88888P"   "Y88888 888      88888P'  "Y888  "Y88888   Y88P    "Y8888888P"  888  888  "Y88888 88888888
//                                                       888               888                                              888           888                                                                       888
//                                                  Y8b d88P              d88P                                              888           888                                                                  Y8b d88P
//                                                   "Y88P"             888P"                                               888           888                                                                   "Y88P"
