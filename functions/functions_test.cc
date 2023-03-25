#include "catch2/catch_test_macros.hpp"
#include "functions.h"

TEST_CASE("get_number()", "") {
  // Test that function returns the expected value
  REQUIRE(get_number() == 42);
}

TEST_CASE("get_text()", "") {
  // Test that function returns the expected value
  REQUIRE(get_text() == std::string("Fully implemented."));
}