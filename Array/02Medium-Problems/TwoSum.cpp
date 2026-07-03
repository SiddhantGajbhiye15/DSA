#include <iostream>
#include <unordered_map>
using namespace std;

void TwoSum(int arr[], int n, int target)
{
    unordered_map<int, int> mp; // Value -> Index

    for (int i = 0; i < n; i++)
    {
        int complement = target - arr[i];

        // Check if the complement already exists
        if (mp.find(complement) != mp.end())
        {
            cout << "Indices: " << mp[complement] << " " << i << endl;
            return;
        }

        // Store the current value and its index
        mp[arr[i]] = i;
    }

    cout << "No solution found." << endl;
}

int main()
{
    int arr[] = {2, 7, 11, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 9;

    TwoSum(arr, n, target);

    return 0;
}