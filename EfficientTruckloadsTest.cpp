#include<iostream>
#include "EfficientTruckloads.h"
using namespace std;

int main()
{
    EfficientTruckloads t;
    int crate, loadsize;
    cout<<"Enter crates: ";
    cin>>crate;
    cout<<"Enter load size: ";
    cin>>loadsize;
    if(crate<=0||loadsize<=0)
    {
        cout<<"ERROR";
    }
    else
    {
    cout<<t.numTrucks(crate,loadsize)<<" ";
    }
    return 0;
}