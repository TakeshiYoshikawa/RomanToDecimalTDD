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
        long symbol = symbol_value(roman[i]);
        
        if (symbol == 0) {
            //Invalid symbol. Not a valid roman number
            return -1;
        }
        
        //Check next symbol for subtractive notation
        if (i + 1 < length) {
            long next = symbol_value(roman[i+1]);
            if (symbol < next) {
                //Using subtractive notation
                symbol = next - symbol;
                
                //Skip next symbol
                i++;
            }
        }
        value += symbol;
    }
    
    return value;
}
