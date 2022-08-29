#include "EfficientTruckloads.h"

int EfficientTruckloads::numTrucks(int numCrates, int loadSize)
{
    if(numCrates<=loadSize)
    {
        return 1;
    }
    
    if(numCratesArray[numCrates]>0)
    {
        return numCratesArray[numCrates];
    }
    else
    {
        if(numCrates%2==0)
        {
            numCratesArray[numCrates] = numTrucks(numCrates/2,loadSize) + numTrucks(numCrates/2,loadSize);
            return numCratesArray[numCrates];
        }else
        {
            numCratesArray[numCrates] = numTrucks(numCrates/2,loadSize) + numTrucks((numCrates/2)+1,loadSize);
            return numCratesArray[numCrates];
        }
    }

}