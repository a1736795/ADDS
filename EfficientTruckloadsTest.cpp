#include<iostream>
#include "EfficientTruckloads.h"
using namespace std;

int main()
{
    EfficientTruckloads t;
    int crate = 14, loadsize=3;

    cout<<t.efficient_Truckloads_Num(crate,loadsize)<<" ";
    return 0;
}