#include<iostream>
#include "Reverse.h"
using namespace std;

int main()
{
    Reverse rev;
    string s = "hello";
    int i=12345;

    cout<<rev.reverseString(s)<<" ";
    cout<<rev.reverseDigit(i)<<" ";
    return 0;
}