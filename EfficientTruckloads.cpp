#include "EfficientTruckloads.h"
using namespace std;

int EfficientTruckloads::efficient_Truckloads_Num(int numCrates, int loadSize)
{
    if(numCrates<=loadSize)
    {
        return 1;
    }
    if(numCratesArray[numCrates]!=0)
    {
        return numCratesArray[numCrates];
    }
    else
    {
        if(numCrates%2==0)
        {
            numCratesArray[numCrates] = efficient_Truckloads_Num(numCrates/2,loadSize) + efficient_Truckloads_Num(numCrates/2,loadSize);
            return numCratesArray[numCrates];
        }else
        {
            numCratesArray[numCrates] = efficient_Truckloads_Num(numCrates/2,loadSize) + efficient_Truckloads_Num((numCrates/2)+1,loadSize);
            return numCratesArray[numCrates];
        }
    }
}