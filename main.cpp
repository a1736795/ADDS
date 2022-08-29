#include<iostream>
#include "Reverse.h"
#include "Truckloads.h"
#include "EfficientTruckloads.h"
using namespace std;

int main()
{
    int crates;
    int loadsize;

    cout<<"Enter the number of crates";
    cin>>crates;

    cout<<"Enter the load size: ";
    cin>>loadsize;

    EfficientTruckloads t;
    int numOfTrucks=t.efficient_Truckloads_Num(crates,loadsize);

    cout<<"The number of Trucks required are: "<<numOfTrucks<<endl;

    return 0;
}