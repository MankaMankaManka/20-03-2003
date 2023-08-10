/*
#include <iostream>

class Truckloads {       // The class
  public:             // Access specifier
    int numCrates;        // Attribute (int variable)
    int loadSize;  // Attribute
    int numTrucks(int numCrates, int loadSize);
    int cratePiles=1;
};

int Truckloads::numTrucks(int numCrates, int loadSize){
    if (numCrates>loadSize){
        if (numCrates==(numCrates/2)*2){
        return numTrucks(numCrates/2, loadSize)+numTrucks(numCrates/2, loadSize);
        } else{
            return numTrucks((numCrates/2)+1, loadSize)+numTrucks(numCrates/2, loadSize);
        }
    }
    return 1;
}

int main()
{
    Truckloads example;
    std::cout<< example.numTrucks(1024,5);
    return 0;
}

*/
