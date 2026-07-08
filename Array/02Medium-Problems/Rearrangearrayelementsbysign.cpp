#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {3, 1, -2, -5, 2, -4};
    int n = sizeof(arr) / sizeof(arr[0]);

    vector<int> ans(n);

    int posIndex = 0;
    int negIndex = 1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            ans[posIndex] = arr[i];
            posIndex += 2;
        }
        else
        {
            ans[negIndex] = arr[i];
            negIndex += 2;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
}