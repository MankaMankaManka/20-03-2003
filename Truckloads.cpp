
#include <iostream>

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
