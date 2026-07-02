#include <iostream>
using namespace std;

int Union(int arr1[], int arr2[], int n, int m, int arr3[])
{
  int i = 0, j = 0, k = 0;

  while (i < n && j < m)
  {
    if (arr1[i] < arr2[j])
    {
      if (k == 0 || arr3[k - 1] != arr1[i])
        arr3[k++] = arr1[i];
      i++;
    }
    else if (arr1[i] > arr2[j])
    {
      if (k == 0 || arr3[k - 1] != arr2[j])
        arr3[k++] = arr2[j];
      j++;
    }
    else
    {
      if (k == 0 || arr3[k - 1] != arr1[i])
        arr3[k++] = arr1[i];
      i++;
      j++;
    }
  }

  // Copy remaining elements of arr1
  while (i < n)
  {
    if (k == 0 || arr3[k - 1] != arr1[i])
      arr3[k++] = arr1[i];
    i++;
  }

  // Copy remaining elements of arr2
  while (j < m)
  {
    if (k == 0 || arr3[k - 1] != arr2[j])
      arr3[k++] = arr2[j];
    j++;
  }

  return k;
}

int main()
{
  int arr1[] = {1, 2, 2, 3, 4, 5};
  int arr2[] = {2, 3, 5, 6};

  int n = sizeof(arr1) / sizeof(arr1[0]);
  int m = sizeof(arr2) / sizeof(arr2[0]);

  int arr3[n + m];

  int size = Union(arr1, arr2, n, m, arr3);

  cout << "Union: ";
  for (int i = 0; i < size; i++)
    cout << arr3[i] << " ";

  return 0;
}