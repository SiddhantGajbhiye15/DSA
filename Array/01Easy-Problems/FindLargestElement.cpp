 #include <stdio.h>
#include <iostream>
 using namespace std;
  int LargestElement(int arr [],int n){
    int Largest = arr[0];

    for(int i = 1;i<n;i++){
      if (Largest < arr[i])
      {
        Largest = arr[i];
      }
    }
    return Largest;
 }

 int main(){
  
  int arr[] = {10,30,50,34,45,23};
  int arr2[] = {-1,-3,-4,5,-6-9-10};

  int n = sizeof(arr)/sizeof(int);
  int m = sizeof(arr2)/sizeof(int);

  
  cout<<LargestElement(arr2,m) <<"     " <<LargestElement(arr,n);
  return 0;

 }