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
    int i,num1,num2,sa;
    cin>>i>>s1>>num1>>num2;
    if (num1 < 0 || num2 < 0) 
    {
    cout<<"ERROR"<<" ";
    }
    else
    {
    cout<<t.numTrucks(num1,num2)<<" ";
    }
    if(i<0)
    cout<<"ERROR"<<" ";
    else
    cout<<rev.reverseDigit(i)<<" ";
    cout<<rev.reverseString(s1)<<" ";

    return 0;
}