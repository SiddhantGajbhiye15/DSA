#include<iostream>
#include<climits>
using namespace std;
int main(){
  int arr[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4};
  int n = sizeof(arr)/sizeof(arr[0]);

  int sum =0,maxSum = INT32_MIN;

  for(int i=0;i<n;i++){

    sum += arr[i];

    maxSum = max(maxSum,sum);

     if(sum<0){
      sum = 0;
     }
  }

  cout << "Maximum sum is: " << maxSum << endl;




  // for(int i=0; i<n; i++){
  //     sum = 0;
  //     for(int j = i; j<n; j++){
  //         sum += arr[j];
  //         maxSum = max(maxSum,sum);
  //     }
  //     
  // }
  // cout << "Maximum sum is: " << maxSum <<endl;


  return 0;
}