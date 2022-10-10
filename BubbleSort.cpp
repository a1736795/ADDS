#include <vector>
#include "BubbleSort.h"

using namespace std;

BubbleSort::BubbleSort()
{

}

void BubbleSort::exec(vector<int> &toSort)
{
    bool wasSwap = 0;
    for (unsigned int i = 0; i < toSort.size(); i++)
    {
        for (unsigned int j = 0; j < toSort.size()-1; j++)
        {
            if(toSort.at(j) > toSort.at(j+1)) 
            {
                swap(toSort.at(j), toSort.at(j+1));
                wasSwap = 1;
            }
        }
        if( !wasSwap ) 
        {
            break;
        }
    }
}