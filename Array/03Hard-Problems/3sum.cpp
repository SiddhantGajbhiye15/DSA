#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> triplet(vector<int> arr, int n)
{

  set<vector<int>> st;

  for (int i = 0; i < n - 2; i++)
  {
    for (int j = i + 1; j < n - 1; j++)
    {
      for (int k = j + 1; k < n; k++)
      {

        if (arr[i] + arr[j] + arr[k] == 0)
        {

          vector<int> temp = {arr[i], arr[j], arr[k]};

          sort(temp.begin(), temp.end());

          st.insert(temp);
        }
      }
    }
  }

  vector<vector<int>> ans(st.begin(), st.end());

  return ans;
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