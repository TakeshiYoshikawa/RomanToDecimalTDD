#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE RomanToDecimal
#include <boost/test/unit_test.hpp>

#include "roman_to_decimal.h" 

BOOST_AUTO_TEST_CASE(Symbols) {
    BOOST_CHECK(roman_to_decimal("I") == 1);
    BOOST_CHECK(roman_to_decimal("V") == 5);
    BOOST_CHECK(roman_to_decimal("X") == 10);
    BOOST_CHECK(roman_to_decimal("L") == 50);
    BOOST_CHECK(roman_to_decimal("C") == 100);
    BOOST_CHECK(roman_to_decimal("D") == 500);
    BOOST_CHECK(roman_to_decimal("M") == 1000);
}

BOOST_AUTO_TEST_CASE(AdditiveForms) {
    BOOST_CHECK(roman_to_decimal("II") == 2);
    BOOST_CHECK(roman_to_decimal("XIII") == 13);
    BOOST_CHECK(roman_to_decimal("CCVII") == 207);
    BOOST_CHECK(roman_to_decimal("MLXVI") == 1066);
}

BOOST_AUTO_TEST_CASE(SubtractiveNotation) {
    BOOST_CHECK(roman_to_decimal("IV") == 4);
    BOOST_CHECK(roman_to_decimal("IX") == 9);
    BOOST_CHECK(roman_to_decimal("XL") == 40);
    BOOST_CHECK(roman_to_decimal("XC") == 90);
    BOOST_CHECK(roman_to_decimal("CD") == 400);
}

BOOST_AUTO_TEST_CASE(MixedNotation) {
    //Testing for longer numbers with subtractive notaion mixed in
    BOOST_CHECK(roman_to_decimal("MCMIV") == 1904);
    BOOST_CHECK(roman_to_decimal("MCMXC") == 1990);
    BOOST_CHECK(roman_to_decimal("MMXVI") == 2016);
}

BOOST_AUTO_TEST_CASE(InvalidNumbers) {
    //Should return -1 if not a valid roman number
    BOOST_CHECK(roman_to_decimal("ABC") == -1);
    BOOST_CHECK(roman_to_decimal("MMXV6") == -1);    
}
