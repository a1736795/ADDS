#include "Reverse.h"

string Reverse::reverseString(string str1)
{
    size_t number_characters= str1.size();
    if(number_characters== 1)
    {
        return str1;
    }
    else
    {
        return str1[number_characters- 1]+reverseString(str1.substr(0, number_characters- 1));
    }

}
int Reverse::reverseDigit(int val)
{
    if(val<10)
    {
        return val;
    }
    int length=0;
    for (int i=val; i; i/=10)
    {
        length++;
    }
    return val%10*(int)pow(10,length-1)+reverseDigit(val/10);
}