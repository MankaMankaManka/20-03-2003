#include <iostream>
#include "Reverser.h"
#include <cmath>

int Reverser::reverseDigit(int value)
{
    if (value > 0) {
        int num=value % 10;
        //value =12345 logvalue=4 50000
        for (int i=0; i<log10(value)-1; i++){
            num=num*10;
        }
		return reverseDigit(value/10) + num;
    }
	if (value <0){
		return -1;
	}
    return 0;
}


std::string Reverser::reverseString(std::string characters)
{
	if (newString.length()<characters.length()){
		stringLocation= characters.length()-newString.length()-1;
		newString= newString+characters[stringLocation];
		return reverseString(characters);
	}
	std::string theString = newString;
	newString="";
	return theString;
}

Reverser::Reverser(){
    
};
