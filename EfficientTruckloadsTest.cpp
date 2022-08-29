#include<iostream>
#include "EfficientTruckloads.h"
using namespace std;

int main()
{
    EfficientTruckloads t;
    int crate = -1, loadsize=3;

    cout<<t.numTrucks(crate,loadsize)<<" ";
    return 0;
}