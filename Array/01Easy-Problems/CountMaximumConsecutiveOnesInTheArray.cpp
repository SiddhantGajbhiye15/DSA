#include <iostream>
using namespace std;

int CountMaxConsecutiveOnes(int arr[], int n)
{
  int count = 0;
  int maxCount = 0;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == 1)
    {
      count++;
    }
    else if (arr[i] == 0)
    {
      if (count > maxCount)
      {
        maxCount = count;
      }
      count = 0;
    }
  }
  if (count > maxCount)
      {
        maxCount = count;
      }

  return maxCount;
}

int main()
{
  int arr1[] = {1, 1, 1, 1, 1,5, 1, 1, 0, 1, 1, 1};

  int n = sizeof(arr1) / sizeof(arr1[0]);

  int maxCount = CountMaxConsecutiveOnes(arr1, n);
  cout << "Maximum consecutive ones are " << maxCount << endl;

  return 0;
}