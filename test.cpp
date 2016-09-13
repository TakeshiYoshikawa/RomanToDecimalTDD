#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE RomanToDecimal
#include <boost/test/unit_test.hpp>

#include "roman_to_decimal.h" 

BOOST_AUTO_TEST_CASE(Symbols)
{
    BOOST_CHECK(roman_todecimal("I") == 1);
    BOOST_CHECK(roman_todecimal("V") == 5);
    BOOST_CHECK(roman_todecimal("X") == 10);
    BOOST_CHECK(roman_todecimal("L") == 50);
    BOOST_CHECK(roman_todecimal("C") == 100);
    BOOST_CHECK(roman_todecimal("D") == 500);
    BOOST_CHECK(roman_todecimal("M") == 1000);
}
