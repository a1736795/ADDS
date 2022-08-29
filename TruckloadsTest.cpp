#include<iostream>
#include "Truckloads.h"
using namespace std;

int main()
{
    Truckloads t;
    int crate = 14, loadsize=3;

    cout<<t.numTrucks(crate,loadsize)<<" ";
    return 0;
}