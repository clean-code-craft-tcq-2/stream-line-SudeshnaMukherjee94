#defineCATCH_CONFIG_MAIN

#include "test/catch.hpp"
#include "Sender.h"
#include "Sender.c"

TEST_CASE("Tests to check if all the data is correctly read from file") {
 REQUIRE (PrintParameterToConsole() == 1)
  }
