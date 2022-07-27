#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question2.h"
#include <vector>

TEST_CASE("testing class get function amount")
{
	vector<Toll> tolls;
	Toll bill1(5,6);
	tolls.push_back(bill1);

	REQUIRE(bill1.get_amount() == 1.25);

	Toll bill2(10,8);
	tolls.push_back(bill2);

	REQUIRE(bill2.get_amount() == 25.00);

	Toll bill3(4,18);
	tolls.push_back(bill3);

	REQUIRE(bill3.get_amount() == 4.00);
}
