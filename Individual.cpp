#include <iostream>
#include <string>
#include "Individual.h"
using namespace std;

Individual::Individual (string bin_str)
{
length=bin_str.size();
    for (int i = 0; i < length; i++) 
    {
        copyOfList[i]='0';
    }
binaryString=bin_str;
}

string Individual::getString()
{
return binaryString;
}

int Individual::getBit(int pos)
{
if (pos>length) 
{
    return -1;
}
if (binaryString[pos]=='1') 
{
    return 1;
}

return 0;
}

void Individual::flipBit(int pos)
{
if (binaryString[pos]=='1') 
{
    binaryString[pos]='0';
}
else{
    binaryString[pos]='1';
}
}

int Individual::getMaxOnes()
{
int Maxones=0;
int sumOnes=0;
for (int i = 0; i < length; i++) 
{
    if (binaryString[i]=='1') 
    {
        sumOnes+=1;
    }
    if (sumOnes>Maxones) 
    {
        Maxones=sumOnes;
    }
    else if (binaryString[i]=='0') 
    {
        sumOnes=0;
    }
}

return Maxones;
}

int Individual::getLength()
{
return length;
}

void Individual::rearrangeBit(int pos)
{
int count=0;
for (int i = 0; i < length; i++) 
{
    if (i<length-pos) 
    {
        rearrange_binaryString[i]=binaryString[pos+i];
        count++;
    }
    else {
        rearrange_binaryString[i]=binaryString[i-count];
    }
}

for (int i = 0; i < length; i++) 
{
    binaryString[i]=rearrange_binaryString[i];
}
}