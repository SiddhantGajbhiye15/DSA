#include <bits/stdc++.h>
using namespace std;

int subarraySum(vector<int> &nums, int k)
{
  int sum = 0, maxCount = 0;
  for (int i = 0; i < nums.size(); i++)
  {
    sum = 0;
    for (int j = i; j < nums.size(); j++)
    {
      sum += nums[j];
      if (sum == k)
      {
        maxCount++;
      }
    }
  }
  return maxCount;
}

int main()
{

  vector<int> arr = {1, 2, 3};
  int k = 3;

  int result = subarraySum(arr, k);

  cout << result;

  return 0;
}