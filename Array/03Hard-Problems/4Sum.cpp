#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> triplet(vector<int> arr, int n,int target)
{
  sort(arr.begin(), arr.end());
  vector<vector<int>> ans;
  for (int i = 0; i < n-3; i++)
  {
    if(i > 0 && arr[i] == arr[i-1])
      continue;
    for (int j = i+1; j < n-2; j++)
    {
      if(j > i+1 && arr[j] == arr[j-1])
        continue;
      int left = j+1;
      int right = n-1;
      while (left < right)
      {
        long long  sum = 1LL * arr[i] + arr[j] +arr[left] +arr[right];
        if(sum == target ){
          ans.push_back({arr[i],arr[j],arr[left],arr[right]});
          left++;
          right--;
          while(left<  right && arr[left] == arr[left-1]) {
          left++;
          }
          while(left<  right && arr[right] == arr[right+1]) {
            right--;
          }
        }
        else if(sum < target){
          left++;
        }
        else{
          right--;
        }
      }
    }
  }
  return ans;
}

int main()
{

  vector<int> arr = {4,3,3,4,4,2,1,2,1,1};
  int target = 9;
  

  vector<vector<int>> threeSum = triplet(arr, arr.size(),target);

  for (auto it : threeSum)
  {
    for (int x : it)
    {
      cout << x << " ";
    }
    cout << endl;
  }

  return 0;
}