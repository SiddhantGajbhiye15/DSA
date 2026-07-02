#include<iostream>
#include<map>
using namespace std;

int main(){
  int arr[] = {1, 2, 3, 4, 5, 1, 2, 3, 4};
  int n = sizeof(arr)/sizeof(int);
  int ans=0;
  
  for(int i=0;i<n;i++){
    ans  = ans^arr[i];  
  }
  // map<int ,int> mp;

  // for(int i=0;i<n;i++){
  //   mp[arr[i]]++;
  // }

  // for(auto it:mp){
  //   if(it.second==1){
  //     ans=it.first;
  //   }
  // }
  cout<<"The number that appears once is "<<ans<<endl;
}