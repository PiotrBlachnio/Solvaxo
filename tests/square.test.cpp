#include "../lib/catch.h"
#include "../src/square.h"
#include "../src/exceptions/invalid-square-input.exception.h"

TEST_CASE("Square") {
    SECTION("Constructor") {
        SECTION("Should assign parameters to the corresponding struct fields") {
            Square square(5, 8, 3);

            REQUIRE(5 == square.number);
            REQUIRE(8 == square.rowIndex);
            REQUIRE(3 == square.columnIndex);
        }

        SECTION("Should throw an exception when parameters are not valid") {
            SECTION("Invalid number") {
                CHECK_THROWS_AS(Square(-1, 5, 5), InvalidSquareInputException);
            }

            SECTION("Invalid rowIndex") {
                CHECK_THROWS_AS(Square(3, 9, 5), InvalidSquareInputException);
            }

            SECTION("Invalid columnIndex") {
                CHECK_THROWS_AS(Square(3, 6, 22), InvalidSquareInputException);
            }
        }
    }
}