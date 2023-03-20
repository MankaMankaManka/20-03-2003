
#include <iostream>
#ifndef TRUCKLOADS_H  /* Include guard */
#define TRUCKLOADS_H


class Truckloads {       // The class
  public:             // Access specifier
    int numCrates;        // Attribute (int variable)
    int loadSize;  // Attribute
    int numTrucks(int numCrates, int loadSize);
    int cratePiles=1;
};

#endif