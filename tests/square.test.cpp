#include "../lib/catch.h"
#include "../src/square.h"

TEST_CASE("Square") {
    SECTION("Constructor") {
        SECTION("Should assign parameters to the corresponding struct fields") {
            Square square(5, 8, 3);

            REQUIRE(5 == square.number);
            REQUIRE(8 == square.rowIndex);
            REQUIRE(3 == square.columnIndex);
        }
    }
}