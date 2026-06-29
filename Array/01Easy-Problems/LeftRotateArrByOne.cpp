#include <iostream>

using namespace std;

void LeftRotateByOne(int arr[], int n)
{
  int i = 0;
  for (int j = 1; j < n; j++)
  {
    swap(arr[i], arr[j]);
    i++;
  }
}
int main()
{

  int arr[] = {7, 3,5,4,3,2,6,3};

  int n = sizeof(arr) / sizeof(int);

  LeftRotateByOne(arr, n);

  for (int j = 0; j < n; j++)
  {
    cout << arr[j] << "  ";
  }
}
