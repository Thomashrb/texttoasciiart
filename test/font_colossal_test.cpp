#include <catch2/catch_test_macros.hpp>
#include <font_colossal.cpp>

TEST_CASE("toascii a", "the char 'a' parses to font_colossal::A") {
  REQUIRE(font_colossal::A == font_colossal::toasciiart('a'));
}
