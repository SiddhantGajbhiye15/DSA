#include <bits/stdc++.h>
using namespace std;

  void rotate(vector<vector<int>> &matrix)
  {
    int n = matrix.size();

    // Create a new n x n matrix
    vector<vector<int>> newMatrix(n, vector<int>(n));

    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        newMatrix[i][j] = matrix[n - 1 - j][i];
      }
    }
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        matrix[i][j] = newMatrix[i][j];
      }
    }
  }

int main()
{

  vector<vector<int>> matrix = {
      {1, 2, 3},
      {4, 5, 6},
      {7, 8, 9}
    };

  rotate(matrix);

  cout << "Rotated Matrix:\n";

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