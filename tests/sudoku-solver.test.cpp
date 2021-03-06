#include "../lib/catch.h"
#include "../src/sudoku-solver.h"

TEST_CASE("Sudoku solver") {
    SECTION("Get_Solution_String") {
        SECTION("Should return string from _board's data") {
            std::string expected = "305420810487901506029056374850793041613208957074065280241309065508670192096512408";

            SudokuSolver sudokuSolver(expected);

            std::string actual = sudokuSolver.getSolutionString();

            REQUIRE(expected == actual);
        }
    }

    SECTION("Solve") {
        SECTION("Should solve the sudoku and assign correct numbers to the _board's data") {
            SECTION("Case 1") {
                std::string input = "305420810487901506029056374850793041613208957074065280241309065508670192096512408";

                SudokuSolver sudokuSolver(input);
                sudokuSolver.solve();

                std::string expected = "365427819487931526129856374852793641613248957974165283241389765538674192796512438";

                std::string actual = sudokuSolver.getSolutionString();

                REQUIRE(expected == actual);
            }

            SECTION("Case 2") {
                std::string input = "002030008000008000031020000060050270010000050204060031000080605000000013005310400";

                SudokuSolver sudokuSolver(input);
                sudokuSolver.solve();

                std::string expected = "672435198549178362831629547368951274917243856254867931193784625486592713725316489";

                std::string actual = sudokuSolver.getSolutionString();

                REQUIRE(expected == actual);
            }

            SECTION("Case 3") {
                std::string input = "004083002051004300000096710120800006040000500830607900060309040007000205090050803";

                SudokuSolver sudokuSolver(input);
                sudokuSolver.solve();

                std::string expected = "974183652651274389283596714129835476746912538835647921568329147317468295492751863";

                std::string actual = sudokuSolver.getSolutionString();

                REQUIRE(expected == actual);
            }
        }
    }
}