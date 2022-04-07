#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "catch.hpp"
#include "Sender.h"
#include "Sender.c"

  float Temperature[NO_OF_READINGS] = {20,25,45};
  float StateOfCharge[NO_OF_READINGS] = {23,34,67};
  float expectedoutput[3][2] = {{20,23}, {25,34},{45,67}};

TEST_CASE("Tests to check if data is correctly read from file") {
  ReadParametersFromFile(Temperature,StateOfCharge);
  for(int i=0;i<3;i++)
  {
    REQUIRE(Temperature[i] == expectedoutput[i][0]);
    REQUIRE(StateOfCharge[i] == expectedoutput[i][1]);
    }
}

TEST_CASE("Tests to check if all the data is printed correctly from file") {
 REQUIRE (PrintParameterToConsole(Temperature,StateOfCharge) == 1)
  }
