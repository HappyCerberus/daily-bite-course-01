#include "catch2/catch_test_macros.hpp"

TEST_CASE("Example test", "") {
  // Using volatile for demonstration purposes only
  // to prevent optimizations for completely
  // removing this code.
  volatile int x = 10;
  volatile int y = 20;
  volatile int z = x + y;

  volatile int i = 0;
  if (z > 30) {
    i = 20;
  } else {
    i = 10;
  }

  REQUIRE(i == 10);
}