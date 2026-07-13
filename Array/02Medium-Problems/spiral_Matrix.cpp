#include <bits/stdc++.h>
using namespace std;
vector<int> spiralOrder(vector<vector<int>> &matrix)
{

  vector<int> spiral;

  int m = matrix.size();    // rows
  int n = matrix[0].size(); // columns

  int top = 0;
  int bottom = m - 1;
  int left = 0;
  int right = n - 1;

  while (top <= bottom && left <= right)
  {

    // Left -> Right
    for (int j = left; j <= right; j++)
    {
      spiral.push_back(matrix[top][j]);
    }
    top++;

    // Top -> Bottom
    for (int i = top; i <= bottom; i++)
    {
      spiral.push_back(matrix[i][right]);
    }
    right--;

    // Right -> Left
    if (top <= bottom)
    {
      for (int j = right; j >= left; j--)
      {
        spiral.push_back(matrix[bottom][j]);
      }
      bottom--;
    }

    // Bottom -> Top
    if (left <= right)
    {
      for (int i = bottom; i >= top; i--)
      {
        spiral.push_back(matrix[i][left]);
      }
      left++;
    }
  }

  return spiral;
}

int main()
{

  vector<vector<int>> matrix = {
      {1, 2, 3},
      {4, 5, 6},
      {7, 8, 9}};

  vector<int> ans = spiralOrder(matrix);

  for (int x : ans)
  {
    cout << x << " ";
  }

  return 0;
}