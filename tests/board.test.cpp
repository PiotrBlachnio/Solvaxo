#include "test.h"

#define private public
#include "../src/board.h"
#undef private

#include "../src/exceptions/invalid-board-string.exception.h"

TEST_CASE("Board") {
    SECTION("Constructor") {
        SECTION("Should transform board string to the vector board and assign in to the struct's field") {
            std::string input = "305420810487901506029056374850793041613208957074065280241309065508670192096512408";
            Board board(input);

            std::vector<std::vector<int>> expected = std::vector<std::vector<int>> {
                std::vector<int> {3,0,5,4,2,0,8,1,0},
                std::vector<int> {4,8,7,9,0,1,5,0,6},
                std::vector<int> {0,2,9,0,5,6,3,7,4},
                std::vector<int> {8,5,0,7,9,3,0,4,1},
                std::vector<int> {6,1,3,2,0,8,9,5,7},
                std::vector<int> {0,7,4,0,6,5,2,8,0},
                std::vector<int> {2,4,1,3,0,9,0,6,5},
                std::vector<int> {5,0,8,6,7,0,1,9,2},
                std::vector<int> {0,9,6,5,1,2,4,0,8}
            };

            std::vector<std::vector<int>> actual = board._board;

            REQUIRE(expected == actual);
        }

        SECTION("Should throw an exception when board string has an invalid number of characters") {
            std::string input = "30542081048790150602905637485079304";

            CHECK_THROWS_AS(Board(input), InvalidBoardStringException);
        }

        SECTION("Should throw an exception when board string contains forbidden characters") {
            std::string input = "305420810487901506fsfsg320895707406dadag50867019209651240d";

            CHECK_THROWS_AS(Board(input), InvalidBoardStringException);
        }
    }
}