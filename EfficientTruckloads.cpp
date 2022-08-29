#include "EfficientTruckloads.h"
using namespace std;

int EfficientTruckloads::efficient_Truckloads_Num(int numCrates1, int loadSize1)
{
    if(numCrates1<=loadSize1)
    {
        return 1;
    }
    if(numCratesArray[numCrates1]!=0)
    {
        return numCratesArray[numCrates1];
    }
    else
    {
        if(numCrates1%2==0)
        {
            numCratesArray[numCrates1] = efficient_Truckloads_Num(numCrates1/2,loadSize1) + efficient_Truckloads_Num(numCrates1/2,loadSize1);
            return numCratesArray[numCrates1];
        }else
        {
            numCratesArray[numCrates1] = efficient_Truckloads_Num(numCrates1/2,loadSize1) + efficient_Truckloads_Num((numCrates1/2)+1,loadSize1);
            return numCratesArray[numCrates1];
        }
    }
}