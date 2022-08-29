#include "Reverse.h"

string Reverse::reverseString(string str)
{
    size_t number_characters= str.size();
    if(number_characters== 1)
    {
        return str;
    }
    else
    {
        return str[number_characters- 1]+reverseString(str.substr(0, number_characters- 1));
    }

}
int Reverse::reverseDigit(int v)
{
    if(v<0)
    {
        return -1;
    }
    static int newNumber = 0;
    static int multiplier = 1;
    if(v>0)
    {
        reverseDigit(v/10);
        newNumber += (v%10)*multiplier;
        multiplier*=10;
    }
    return newNumber;
}