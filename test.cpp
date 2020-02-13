#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "UtilityFunctions.h"


TEST_CASE( "Added n to each element of the vector", "[VectorPlusN]" ) {
    REQUIRE( VectorPlusN({1, 2, 3}, 2)[0] == 3 );
    REQUIRE( VectorPlusN({1, 2, 3}, 2)[1] == 4 );
    REQUIRE( VectorPlusN({1, 2, 3}, 2)[2] == 5 );
}

TEST_CASE( "Sum vector", "[Sum]" ) {
    REQUIRE( Sum({1, 2, 3}) == 6 );
    REQUIRE( Sum({4, 5, 6}) == 15 );
}