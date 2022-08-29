#include<iostream>
#include<sstream>
using namespace std;

class Reverse
{
public:

int reverseDigit(int v)
{
if(v < 0)
{
return -1;
}
static int newNumber = 0;
static int multiplier = 1;
if(v > 0)
{
reverseDigit(v/10);
newNumber += (v%10) * multiplier;
multiplier *= 10;
}
return newNumber;
}

string reverseString(string s)
{
static char *newString = new char[s.length()+1];

reverseStringUtil(s,0,newString);
newString[s.length()] = '\0';

return newString;
}

void reverseStringUtil(string s, int pos, char ps[])
{
if(s[pos] == '\0')
return;
reverseStringUtil(s,pos+1,ps);
int index = s.length()-pos-1;
ps[index] = s[pos];
}

};

class TruckLoads
{
public:
int CalculateTruckLoads(int n)
{
if(n == 0) return 0;
if(n == 1 || n == 2) return 1;

return CalculateTruckLoads(n-1) + CalculateTruckLoads(n-2);
}
};

class EfficientTruckLoads
{
static int *tl;

public:
EfficientTruckLoads(int n)
{
tl = new int[n];
}

int CalculateEfficientTruckLoads(int n)
{

if(n == 1 || n == 2) return 1;

if(tl[n] > 0)
return tl[n];

return tl[n] = CalculateEfficientTruckLoads(n-1) + CalculateEfficientTruckLoads(n-2);
}
};
static int i [] = {0};
int* EfficientTruckLoads :: tl = i;


int main()
{
int i,n1,n2;
string s;
cin >> i >> s >> n1 >> n2;
Reverse *r = new Reverse();
TruckLoads* f = new TruckLoads();
EfficientTruckLoads *e = new EfficientTruckLoads(n2);
int p =r->reverseDigit(i);
if(p == -1)
cout << "ERROR";
else
cout << p;
cout <<" "<< r->reverseString(s)<<" " << f->CalculateTruckLoads(n1) << " "<< e->CalculateEfficientTruckLoads(n2);


return 0;
}