#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  vector<vector<int>> generate(int numRows)
  {

    vector<vector<int>> triangle;

    for (int i = 0; i < numRows; i++)
    {

      vector<int> arr;

      for (int j = 0; j <= i; j++)
      {

        // First and last element of every row
        if (j == 0 || j == i)
        {
          arr.push_back(1);
        }
        else
        {
          // Middle elements
          arr.push_back(triangle[i - 1][j - 1] + triangle[i - 1][j]);
        }
      }

      triangle.push_back(arr);
    }

    return triangle;
  }
};

int main()
{
  int numRows;

  cout << "Enter number of rows: ";
  cin >> numRows;

  Solution obj;
  vector<vector<int>> result = obj.generate(numRows);

  cout << "\nPascal's Triangle:\n";

  for (const auto &row : result)
  {
    for (int val : row)
    {
      cout << val << " ";
    }
    cout << endl;
  }

  return 0;
}