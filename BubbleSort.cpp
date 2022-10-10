#include <vector>
#include "BubbleSort.h"

using namespace std;

std::vector<int> sort(std::vector<int> list)
{
    bool wasSwap = 0;
    for (unsigned int i = 0; i < list.size(); i++)
    {
        for (unsigned int j = 0; j < list.size()-1; j++)
        {
            if(list.at(j) > list.at(j+1)) 
            {
                swap(list.at(j), list.at(j+1));
                wasSwap = 1;
            }
        }
        if( !wasSwap ) 
        {
            break;
        }
    }
    return list;
}
