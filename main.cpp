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
    int i,sa;
    cin>>i>>s1;
    
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
   
    if(i<0)
    cout<<"ERROR"<<" ";
    else
    cout<<rev.reverseDigit(i)<<" ";
    cout<<rev.reverseString(s1)<<" ";

    return 0;
}