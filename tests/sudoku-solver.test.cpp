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
        }
    }
}