#include<iostream>
using namespace std;

bool IsArraySorted(int arr [],int n){
  for(int i = 1;i<n;i++){
    if(arr[i-1] >arr[i]){
      return false;
    }
  }

  return true;
}

int main(){

  int arr[] = {7, 7, 7, 10, 20};

  int n = sizeof(arr) / sizeof(int);

  cout << " Sorted : " << IsArraySorted(arr,n) << endl;

  return 0;
}
