#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "while.h"
#include "value_ref.h"
#include "vec.h"
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test sum of squares function")
{
	REQUIRE(sum_of_squares(3) == 14);
	REQUIRE(sum_of_squares(4) == 30);
	REQUIRE(sum_of_squares(5) == 55);
}

TEST_CASE("test value and ref function")
{
	int num1 = 5, num2 = 10;

	pass_by_val_and_ref(num1, num2);

	REQUIRE(num1 == 5);
	REQUIRE(num2 == 50);
}

TEST_CASE("test loop vector w index")
{
	vector<int> nums{ 9,10,99,5,67 };
	vector<int> expected{ 9,10,99,5,67 };

	loop_vector_w_index(nums);

	REQUIRE(nums == expected);
}

TEST_CASE("test loop vector w index reference")
{
	vector<int> nums{ 9,10,99,5,67 };
	vector<int> expected{ 0,0,0,0,0};

	loop_vector_w_index_ref(nums);

	REQUIRE(nums == expected);
}