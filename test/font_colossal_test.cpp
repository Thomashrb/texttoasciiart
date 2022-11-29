#include <catch2/catch_test_macros.hpp>
#include <font_colossal.cpp>
#include <font_colossal.hpp>

TEST_CASE("toascii a", "the char 'a' parses to font_colossal::A") {
  REQUIRE(font_colossal::LOWER_A == *font_colossal::toasciiart('a'));
}
