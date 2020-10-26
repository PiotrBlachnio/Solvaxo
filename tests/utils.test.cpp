#include "../lib/catch.h"
#include "../src/utils.h"

TEST_CASE("Utils") {
    SECTION("IsNumerical") {
        SECTION("Should return true if string doesn't contain any non-numerical characters") {
            SECTION("Case 1") {
                std::string input = "5801617858190611";

                bool actual = Utils::isNumerical(input);

                REQUIRE(actual);
            }

            SECTION("Case 2") {
                std::string input = "5";

                bool actual = Utils::isNumerical(input);

                REQUIRE(actual);
            }

            SECTION("Case 3") {
                std::string input = "000000000000";

                bool actual = Utils::isNumerical(input);

                REQUIRE(actual);
            }
        }

        SECTION("Should return false if string contains non-numerical characters") {
            SECTION("Case 1") {
                std::string input = "571fadatp1313e";

                bool actual = Utils::isNumerical(input);

                REQUIRE_FALSE(actual);
            }

            SECTION("Case 2") {
                std::string input = "_";

                bool actual = Utils::isNumerical(input);

                REQUIRE_FALSE(actual);
            }

            SECTION("Case 3") {
                std::string input = "14151 31115";

                bool actual = Utils::isNumerical(input);

                REQUIRE_FALSE(actual);
            }
        }
    }
}