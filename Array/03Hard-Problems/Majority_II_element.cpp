#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
  vector<int> majorityElement(vector<int> &nums)
  {
    int n = nums.size();
    vector<int> arr;
    unordered_map<int, int> mp;

    // Count frequency of each element
    for (int i = 0; i < n; i++)
    {
      mp[nums[i]]++;
    }

    // Store elements appearing more than n/3 times
    for (auto it : mp)
    {
      if (it.second > n / 3)
      {
        arr.push_back(it.first);
      }
    }

    return arr;
  }
};

int main()
{
  int n;

  cout << "Enter size of array: ";
  cin >> n;

  vector<int> nums(n);

  cout << "Enter array elements: ";
  for (int i = 0; i < n; i++)
  {
    cin >> nums[i];
  }

  Solution obj;
  vector<int> result = obj.majorityElement(nums);

  if (result.empty())
  {
    cout << "No majority element found." << endl;
  }
  else
  {
    cout << "Majority element(s): ";
    for (int x : result)
    {
      cout << x << " ";
    }
    cout << endl;
  }

  return 0;
}