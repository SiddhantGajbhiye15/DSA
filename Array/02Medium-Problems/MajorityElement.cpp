#include<iostream>
#include<map>
using namespace std;

int MajorityElement(int arr[], int n) {

  // int element; int count = 0;
  // for(int i=0;i<n;i++){
  //     if(count == 0){
  //       element =arr[i];
  //       count=1;
  //     }
  //     else if(arr[i]== element){
  //     count++; 
  //     }
  //     else{
  //       count--;
  //     }
  //   }
  //   count = 0;
  //   for(int i=0;i<n;i++){
  //     if(arr[i] == element){
  //       count++;
  //     }
  //   }
  //   if(count > n/2){
  //     return element;
  //   }
  //   else{
  //     return -1;
  //   }

  map<int, int> mp;

  for(int i=0;i<n;i++){
      mp[arr[i]]++;
  }

  int majorityElement = -1;
  for(auto &it : mp){
    if(it.second >(n/2)){
        majorityElement = it.first;
        break;
    }
  }

  return majorityElement;

    // int count = 0, maxCount=0;
    // for(int i=0;i<n;i++){
    //     count  = 0;
    //     for(int j=1;j<n;j++){
    //         if(arr[i] == arr[j]){
    //             count++;
    //         }
    //     }
    //     if(count > maxCount){
    //         maxCount = count;
    //     }
    // }
    // return maxCount;
}
int main (){

  int arr[] = {0, 1, 2, 1, 2, 1,2,1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2};
  int n = sizeof(arr)/sizeof(arr[0]);
  int majority  =  MajorityElement(arr,n);
  
  cout<<majority;
  
  return 0;
}