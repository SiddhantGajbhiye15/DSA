#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> triplet(vector<int> arr, int n)
{

  sort(arr.begin(), arr.end());
  // Store final result
  vector<vector<int>> ans;

  // First loop for first element
  for (int i = 0; i < n; i++)
  {
    // Skip duplicates for first element
    if (i > 0 && arr[i] == arr[i - 1])
      continue;

    // Two pointers
    int left = i + 1, right = n - 1;

    // Find pairs for current arr[i]
    while (left < right)
    {
      int sum = arr[i] + arr[left] + arr[right];

      if (sum == 0)
      {
        ans.push_back({arr[i], arr[left], arr[right]});
        left++, right--;

        // Skip duplicates for left
        while (left < right && arr[left] == arr[left - 1])
          left++;
        // Skip duplicates for right
        while (left < right && arr[right] == arr[right + 1])
          right--;
      }
      else if (sum < 0)
        left++;
      else
        right--;
    }
  }
  return ans;

  // set<vector<int>> st;

  // for (int i = 0; i < n - 2; i++)
  // {
  //   for (int j = i + 1; j < n - 1; j++)
  //   {
  //     for (int k = j + 1; k < n; k++)
  //     {

  //       if (arr[i] + arr[j] + arr[k] == 0)
  //       {

  //         vector<int> temp = {arr[i], arr[j], arr[k]};

  //         sort(temp.begin(), temp.end());

  //         st.insert(temp);
  //       }
  //     }
  //   }
  // }

  // vector<vector<int>> ans(st.begin(), st.end());

  // return ans;
}

int main()
{

  vector<int> arr = {-1, 0, 1, 2, -1, -4};

  vector<vector<int>> threeSum = triplet(arr, arr.size());

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