#include<iostream>

using namespace std;

int RemoveDuplicates(int arr[],int n){
  int i = 0;int j =1;
  while (j<n){
    if(arr[i] == arr[j]){
      j++;
    }
    else if(arr[i] != arr[j]) {
      arr[i+1]=arr[j];
      j++;
      i++;
    }
  }
  return i+1;
}

int main (){

  int arr[] = {7, 7};

  int n = sizeof(arr) / sizeof(int);

  int arrCountAfterSorting = RemoveDuplicates(arr, n);
  cout << "" << arrCountAfterSorting << endl;
}