#include <iostream>
#ifndef REVERSER_H   /* Include guard */
#define REVERSER_H

class Reverser {       // The class
  public:             // Access specifier
	int reverseDigit(int value);
    	int value=0;
	int newNum=0;
	Reverser();
	std::string reverseString(std::string characters);
	std::string newString="";
	int stringLocation;
};

#endif
