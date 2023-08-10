#include <iostream>
#include "Reverser.h"

int Reverser::reverseDigit(int value)
{
    //int rev_num = 0;
    if (value > 0) {
        newNum = newNum*10 + value % 10;
        value = value/10;
		return reverseDigit(value);
    }
	if (value <0){
		return -1;
}
	int returnint=newNum;
	newNum=0;
    return returnint;
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

Reverser::Reverser(){
    
};
