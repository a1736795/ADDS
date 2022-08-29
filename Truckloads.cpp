#include "Truckloads.h"

int Truckloads::numTrucks(int numCrates, int loadSize)
{
    if(numCrates<=loadSize)
    {
        return 1;
    }
    if(numCrates%2==0) //if number of crates are even
    {
        return numTrucks(numCrates/2,loadSize)+numTrucks(numCrates/2,loadSize);
    }
    else //if number of crates are odd
    {
        return numTrucks(numCrates/2,loadSize)+numTrucks((numCrates/2)+1,loadSize);
    }
}