#include <stdio.h>

int numDup(int arr[], int start, int size, int element) 
{
  int dup = 0;
  while (dup<size)
  {
    if (arr[i] == element) 
        dup++;
    i += 1;
  }
  return dup;
}

int main()
{
    numDup({1,2,3,4,5},1,5,3);
    return 0;

}