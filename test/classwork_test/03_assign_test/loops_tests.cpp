#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "loops.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test funky factoals")
{
	REQUIRE(funky_factoral(3) == 6);
	REQUIRE(funky_factoral(4) == 24);
	REQUIRE(funky_factoral(5) == 120);
}