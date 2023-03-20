#include <iostream>
#ifndef REVERSER_H   /* Include guard */
#define REVERSER_H

class Reverser {       // The class
  public:             // Access specifier
	int reverseDigit(int value);
    int value;
	int rev_num = 0;
	std::string reverseString(std::string characters);
	std::string newString="";
	int stringLocation;
};

#endif