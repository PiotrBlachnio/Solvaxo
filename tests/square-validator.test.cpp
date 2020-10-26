#include "../lib/catch.h"
#include "../src/square-validator.h"
#include "../src/board.h"
#include "../src/square.h"

TEST_CASE("Square validator") {
    Board board("305420810487901506029056374850793041613208957074065280241309065508670192096512408");

    SECTION("IsSquareValid") {
        SECTION("Should return true when the square does not contain a duplicate number") {
            SECTION("Case 1") {
                Square square(1, 2, 0);

                bool actual = SquareValidator::isSquareValid(square, board);

                REQUIRE(actual);
            }

            SECTION("Case 2") {
                Square square(3, 5, 8);

                bool actual = SquareValidator::isSquareValid(square, board);

                REQUIRE(actual);
            }

            SECTION("Case 3") {
                Square square(3, 8, 7);

                bool actual = SquareValidator::isSquareValid(square, board);

                REQUIRE(actual);
            }
        }

        SECTION("Should return false when the square contains a duplicate number") {
            SECTION("Case 1") {
                Square square(5, 2, 0);

                bool actual = SquareValidator::isSquareValid(square, board);

                REQUIRE_FALSE(actual);
            }

            SECTION("Case 2") {
                Square square(6, 5, 8);

                bool actual = SquareValidator::isSquareValid(square, board);

                REQUIRE_FALSE(actual);
            }

            SECTION("Case 3") {
                Square square(8, 8, 7);

                bool actual = SquareValidator::isSquareValid(square, board);

                REQUIRE_FALSE(actual);
            }
        }
    }
}