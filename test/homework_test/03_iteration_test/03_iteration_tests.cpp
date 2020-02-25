#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "dna.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("verify reverse string")
{
	REQUIRE(get_reverse_string("AGCTATAG") == "GATATCGA");
}
TEST_CASE("check dna complement") 
{
	REQUIRE(get_dna_complement("AAAACCCGGT")=="ACCGGGTTTT");
}