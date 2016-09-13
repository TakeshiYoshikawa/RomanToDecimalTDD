#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE RomanToDecimal
#include <boost/test/unit_test.hpp>

#include "roman_to_decimal.h" 

BOOST_AUTO_TEST_CASE(Symbols)
{
    BOOST_CHECK(roman_to_decimal("I") == 1);
    BOOST_CHECK(roman_to_decimal("V") == 5);
    BOOST_CHECK(roman_to_decimal("X") == 10);
    BOOST_CHECK(roman_to_decimal("L") == 50);
    BOOST_CHECK(roman_to_decimal("C") == 100);
    BOOST_CHECK(roman_to_decimal("D") == 500);
    BOOST_CHECK(roman_to_decimal("M") == 1000);
}
