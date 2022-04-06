#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test/catch.hpp"
#include "Sender.h"
#include "Sender.c"

TEST_CASE("Tests to check if all the data is correctly read from file") {
 REQUIRE (PrintParameterToConsole() == 1)
  }
