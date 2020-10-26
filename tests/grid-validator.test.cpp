#include "../lib/catch.h"
#include "../src/grid-validator.h"
#include "../src/board.h"
#include "../src/square.h"

TEST_CASE("Grid validator") {
    Board board("305420810487901506029056374850793041613208957074065280241309065508670192096512408");

    SECTION("IsGridValid") {
        SECTION("Should return true when the grid does not contain a duplicate number") {
            SECTION("Case 1") {
                Square square(1, 2, 0);

                bool actual = GridValidator::isGridValid(square, board);

                REQUIRE(actual);
            }

            SECTION("Case 2") {
                Square square(6, 5, 8);

                bool actual = GridValidator::isGridValid(square, board);

                REQUIRE(actual);
            }

            SECTION("Case 3") {
                Square square(3, 8, 7);

                bool actual = GridValidator::isGridValid(square, board);

                REQUIRE(actual);
            }
        }

        SECTION("Should return false when the grid contains a duplicate number") {
            SECTION("Case 1") {
                Square square(5, 2, 0);

                bool actual = GridValidator::isGridValid(square, board);

                REQUIRE_FALSE(actual);
            }

            SECTION("Case 2") {
                Square square(4, 5, 8);

                bool actual = GridValidator::isGridValid(square, board);

                REQUIRE_FALSE(actual);
            }

            SECTION("Case 3") {
                Square square(1, 8, 7);

                bool actual = GridValidator::isGridValid(square, board);

                REQUIRE_FALSE(actual);
            }
        }
    }
}