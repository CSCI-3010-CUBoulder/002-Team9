#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

TEST_CASE( "Added n to each element of the vector", "[VectorPlusN]" ) {
    REQUIRE( VectorPlusN({1, 2, 3}, 2) == {3, 4, 5} );
    REQUIRE( VectorPlusN({4, 5, 6}, 3) == {7, 8, 9} );
}

TEST_CASE( "Sum vector", "[Sum]" ) {
    REQUIRE( Sum({1, 2, 3}) == 6 );
    REQUIRE( Sum({4, 5, 6}) == 15 );
}