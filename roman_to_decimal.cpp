#include <string.h>
#include "roman_to_decimal.h"

long symbol_value(char symbol) {
    switch (symbol) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}
//Convert the roman numeral to decimal
long roman_to_decimal(char const *roman) {
    long value = 0;
    
    int length = strlen(roman);
    for (int i=0; i<length; i++) {
        value += symbol_value(roman[i]);
    }
    return value;
}
