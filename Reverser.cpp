#include <iostream>
#include "Reverser.h"

int Reverser::reverseDigit(int value)
{
    int rev_num = 0;
    while (value > 0) {
        rev_num = rev_num * 10 + value % 10;
        value = value / 10;
    }
    return rev_num;
}