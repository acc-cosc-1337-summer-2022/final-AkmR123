#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question1.h"

TEST_CASE("test function get_average")
{
	int SIZE = 5;
	double numbers[SIZE]{88, 95, 50, 90, 77};

	REQUIRE(get_average(numbers, SIZE) == 80);
}
