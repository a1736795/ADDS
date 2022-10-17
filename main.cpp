#include<iostream>
#include<sstream>

using namespace std;
#include "LinkedList.h"

bool isNumber(string s)
{
    int km = s.length();
    for (int i = 0; i < km; i++)
    if (isdigit(s[i]) == false)
    {
        return false;
    }
    return true;
}

int main()
{
    int A[100];
    int count=0;
    int num,arg1,arg2;
    string str;
    while(true)
    {
        cin>>str;
        if(isNumber(str)==false)
        break;
        stringstream(str)>>num;
        A[count]=num;
        count++;
    }
    list *L=new list(A,count);
    cin>>arg1;
    cin>>arg2;

    if(!str.compare("AF"))
    {
        L->addFront(arg1);
    }
    else if(!str.compare("AE"))
    {
        L->addEnd(arg1);
    }
    else if(!str.compare("AP"))
    {
        L->addAtPosition(arg1,arg2);
    }
    else if(!str.compare("S"))
    {
        L->search(arg1);
    }
    else if(!str.compare("DF"))
    {
        L->deleteFront();
    }
    else if(!str.compare("DE"))
    {
        L->deleteEnd();
    }
    else if(!str.compare("DP"))
    {
        L->deletePosition(arg1);
    }
    else if(!str.compare("GI"))
    {
        L->getItem(arg1);
    }
    L->printItems();
    return 0;
}