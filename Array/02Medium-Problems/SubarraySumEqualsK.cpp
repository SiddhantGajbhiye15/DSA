#include <bits/stdc++.h>
using namespace std;

int subarraySum(vector<int> &nums, int k)
{
  // arr = {1, 2, 3,-1,2,-1,-1,3,4,-3};
  int prefixsum = 0, maxCount = 0;

  unordered_map<int,int> map;
  map[0] = 1;
  for(int i=0;i<nums.size();i++){

    prefixsum += nums[i];
    int remove = prefixsum - k;

    if(map.find(remove) != map.end()){
      maxCount += map[remove];
    }
    map[prefixsum]++;
  }

  // for (int i = 0; i < nums.size(); i++)
  // {
  //   sum = 0;
  //   for (int j = i; j < nums.size(); j++)
  //   {
  //     sum += nums[j];
  //     if (sum == k)
  //     {
  //       maxCount++;
  //     }
  //   }
  // }
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