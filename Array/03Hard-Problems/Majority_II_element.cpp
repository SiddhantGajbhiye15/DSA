#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
  vector<int> majorityElement(vector<int> &nums)
  {
    int count1 = 0, count2 = 0;
    int candidate1 = 0, candidate2 = 0;

    // First Pass: Find Candidates
    for (int num : nums)
    {

      if (num == candidate1)
      {
        count1++;
      }
      else if (num == candidate2)
      {
        count2++;
      }
      else if (count1 == 0)
      {
        candidate1 = num;
        count1 = 1;
      }
      else if (count2 == 0)
      {
        candidate2 = num;
        count2 = 1;
      }
      else
      {
        count1--;
        count2--;
      }
    }

    // Second Pass: Verify Candidates
    count1 = 0;
    count2 = 0;

    for (int num : nums)
    {
      if (num == candidate1)
        count1++;
      else if (num == candidate2)
        count2++;
    }

    vector<int> ans;
    int n = nums.size();

    if (count1 > n / 3)
      ans.push_back(candidate1);

    if (count2 > n / 3)
      ans.push_back(candidate2);

    return ans;

    //   int n = nums.size();
    //   vector<int> arr;
    //   unordered_map<int, int> mp;

    //   // Count frequency of each element
    //   for (int i = 0; i < n; i++)
    //   {
    //     mp[nums[i]]++;
    //   }

    //   // Store elements appearing more than n/3 times
    //   for (auto it : mp)
    //   {
    //     if (it.second > n / 3)
    //     {
    //       arr.push_back(it.first);
    //     }
    //   }

    //   return arr;
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