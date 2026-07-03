#include <iostream>

int logestsubarray(int arr[], int n, int k)
{

  int i = 0, j = 0, count = 0, maxCount = 0;
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum = 0;
    for (int j = i; j < n; j++)
    {
      sum += arr[j];

      if (sum == k)
      {
        count = j - i + 1;
        if (count > maxCount)
        {
          maxCount = count;
        }
        break;
      }
      else if (sum > k)
      {
        break;
      }
    }
  }
  return maxCount;
}
int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
  int n = sizeof(arr) / sizeof(int);
  int k = 15;

  int newCount = logestsubarray(arr, n, k);

  std::cout << "No subarray found with given sum " << newCount << std::endl;
}