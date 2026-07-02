#include<iostream>
using namespace std;

int MissingNumber(int arr[],int n){
  
  int sum = (n*(n+1))/2;
  int arrSum = 0;
  for(int i=0;i<n;i++){
    arrSum+=arr[i];
  }
  return sum-arrSum;
}

int main(){
  
  int arr[] = {1,2,3,4,5,6,7,8};
  int n = sizeof(arr)/sizeof(int) + 1;
  
  cout<<"The missing number is "<<MissingNumber(arr, n)<<endl;
}