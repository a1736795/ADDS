#include<iostream>
#include "Reverse.h"
#include "Truckloads.h"
#include "EfficientTruckloads.h"
using namespace std;

int main()
{
    Reverse rev;
    Truckloads tl;
    EfficientTruckloads t;
    
    string s1;
    int i,sa,crate,loadsize;
    cin>>i>>s1>>crate>>loadsize;

    if(i<0)
    {
    cout<<"ERROR"<<" ";
    }
    else
    cout<<rev.reverseDigit(i)<<" ";
    cout<<rev.reverseString(s1)<<" ";

    if(crate<=0||crate>10000)
    {
        cout<<"ERROR ";
    }
    else
    {
    cout<<tl.numTrucks(crate,loadsize)<<" ";
    }
    
    if(crate<=0||crate>10000)
    {
        cout<<"ERROR ";
    }
    else
    {
    cout<<t.numTrucks(crate,loadsize)<<" ";
    }
    return 0;
}