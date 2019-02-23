#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch2/catch.hpp"

#include "chapter1_1.h"

TEST_CASE("Sum is computed", "sum_of_naturals")
{
    REQUIRE( sum_of_naturals(0), 0);
}