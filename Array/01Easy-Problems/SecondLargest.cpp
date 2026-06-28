#include <iostream>
#include <climits>
using namespace std;

int SecLargest(int arr[], int n)
{
  int sec = INT_MIN, lar = INT_MIN;

  for (int i = 0; i < n; i++)
  {
    if (arr[i] > lar)
    {
      sec = lar;
      lar = arr[i];
    }
    else if (arr[i] > sec && arr[i] != lar)
    {
      sec = arr[i];
    }
  }
  if (sec != INT_MIN)
  {
    return sec;
  }
  else
  {
    return -1;
  }
}
int main()
{
  int arr[] = {7, 7, 7, 10, 20};

  int n = sizeof(arr) / sizeof(int);

  int Secondlargest = SecLargest(arr, n);
  cout << "second largest is " << Secondlargest << endl;
}
