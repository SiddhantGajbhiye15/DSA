#include <bits/stdc++.h>
using namespace std;
int maxLen(vector<int> &arr, int n)
{
  int maxcount = 0;
  for (int i = 0; i < n; i++)
  {
    int sum = 0;
    for (int j = i; j < n; j++)
    {
      sum += arr[j];
      if (sum == 0)
      {
        int count = j - i + 1;
        maxcount = max(maxcount, count);
      }
    }
  }
  return maxcount;
}
int main()
{
  vector<int> arr = {-4, -3, 3, 4, 4, 2, 1, 2, 1, 1};
  int n = arr.size();
  int max = maxLen(arr, n);
  cout << max;
  return 0;
}