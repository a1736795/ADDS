int numDup(int arr[], int start, int size, int element) 
{
  int dup = 0;
  while (i<size)
  {
    if (arr[i] == element) 
        dup++;
    i += 1;
  }
  return dup;
}