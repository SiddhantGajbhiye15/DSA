#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> arr = {100, 4, 200, 3, 2, 1};

  // Initialize the longest sequence length
  int longest = 1;
  unordered_set<int> st;

  // Put all the array elements into the set
  for (int i = 0; i < n; i++)
  {
    st.insert(a[i]);
  }

  /* Traverse the set to
     find the longest sequence  */
  for (auto it : st)
  {
    // Check if 'it' is a starting number of a sequence
    if (st.find(it - 1) == st.end())
    {
      // Initialize the count of the current sequence
      int cnt = 1;
      // Starting element of the sequence
      int x = it;

      // Find consecutive numbers in the set
      while (st.find(x + 1) != st.end())
      {
        // Move to the next element in the sequence
        x = x + 1;
        // Increment the count of the sequence
        cnt = cnt + 1;
      }
      // Update the longest sequence length
      longest = max(longest, cnt);
    }
  }

  // sort(arr.begin() , arr.end());
  // //1,2,3,4,100,200
  // int count = 1,maxcount =1;
  // for(int i=0;i<arr.size()-1;i++){

  //     if(arr[i + 1] == arr[i] +1){
  //         count++;
  //     }
  //     else {
  //        if(count>maxcount){
  //             maxcount = count;

  //        }
  //        count =1;
  //     }
  // }
  // maxcount = max(maxcount, count);
  // cout<<maxcount;

  return 0;
}