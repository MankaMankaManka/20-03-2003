#include <iostream>
#include "Reverser.h"

int Reverser::reverseDigit(int value)
{
    //int rev_num = 0;
    if (value > 0) {
        rev_num = rev_num*10 + value % 10;
        value = value / 10;
		return reverseDigit(value);
    }
    return rev_num;
}

std::string Reverser::reverseString(std::string characters)
{
	if (newString.length()<characters.length()){
		stringLocation= characters.length()-newString.length()-1;
		newString= newString+characters[stringLocation];
		return reverseString(characters);
	}
	return newString;
}