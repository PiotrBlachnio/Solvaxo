#include "../lib/catch.h"
#include "../src/row-validator.h"
#include "../src/board.h"
#include "../src/square.h"

TEST_CASE("Row validator") {
    Board board("305420810487901506029056374850793041613208957074065280241309065508670192096512408");

    SECTION("IsRowValid") {
        SECTION("Should return true when the row does not contain a duplicate number") {
            SECTION("Case 1") {
                Square square(9, 0, 0);

                bool actual = RowValidator::isRowValid(square, board);

                REQUIRE(actual);
            }

            SECTION("Case 2") {
                Square square(2, 3, 6);

                bool actual = RowValidator::isRowValid(square, board);

                REQUIRE(actual);
            }

            SECTION("Case 3") {
                Square square(7, 8, 0);

                bool actual = RowValidator::isRowValid(square, board);

                REQUIRE(actual);
            }
        }

        SECTION("Should return false when the row contains a duplicate number") {
            SECTION("Case 1") {
                Square square(4, 0, 1);

                bool actual = RowValidator::isRowValid(square, board);

                REQUIRE_FALSE(actual);
            }

            SECTION("Case 2") {
                Square square(7, 5, 8);

                bool actual = RowValidator::isRowValid(square, board);

                REQUIRE_FALSE(actual);
            }

            SECTION("Case 3") {
                Square square(1, 8, 0);

                bool actual = RowValidator::isRowValid(square, board);

                REQUIRE_FALSE(actual);
            }
        }
    }
}