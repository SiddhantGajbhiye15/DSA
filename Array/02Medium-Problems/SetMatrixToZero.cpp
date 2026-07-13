#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  void setZeroes(vector<vector<int>> &matrix)
  {
    int m = matrix.size();    // Rows
    int n = matrix[0].size(); // Columns

    vector<pair<int, int>> zeroIndices;

    // Store all zero positions
    for (int i = 0; i < m; i++)
    {
      for (int j = 0; j < n; j++)
      {
        if (matrix[i][j] == 0)
        {
          zeroIndices.push_back({i, j}); 
        }
      }
    }

    // Zero corresponding rows and columns
    for (auto it : zeroIndices)
    {
      // Zero the row
      for (int j = 0; j < n; j++)
      {
        matrix[it.first][j] = 0;
      }

      // Zero the column
      for (int i = 0; i < m; i++)
      {
        matrix[i][it.second] = 0;
      }
    }
  }
};

int main()
{
  Solution obj;

  vector<vector<int>> matrix = {
      {0, 1, 2, 0},
      {3, 4, 5, 2},
      {1, 3, 1, 5}};

  obj.setZeroes(matrix);

  // Print matrix
  for (auto row : matrix)
  {
    for (auto val : row)
    {
      cout << val << " ";
    }
    cout << endl;
  }

  return 0;
}