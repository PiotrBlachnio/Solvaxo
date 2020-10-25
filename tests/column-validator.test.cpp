#include "../lib/catch.h"
#include "../src/column-validator.h"
#include "../src/board.h"
#include "../src/square.h"

TEST_CASE("Column validator") {
    Board board("305420810487901506029056374850793041613208957074065280241309065508670192096512408");

    SECTION("IsColumnValid") {
        SECTION("Should return true when the column does not contain a duplicate number") {
            SECTION("Case 1") {
                Square square(9, 2, 0);

                bool actual = ColumnValidator::isColumnValid(square, board);

                REQUIRE(actual);
            }

            SECTION("Case 2") {
                Square square(3, 5, 8);

                bool actual = ColumnValidator::isColumnValid(square, board);

                REQUIRE(actual);
            }

            SECTION("Case 3") {
                Square square(2, 8, 7);

                bool actual = ColumnValidator::isColumnValid(square, board);

                REQUIRE(actual);
            }
        }
    }
}