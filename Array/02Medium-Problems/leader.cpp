#include<bits/stdc++.h>

using namespace std;

int main(){
  
  vector<int> arr = {10, 22, 12, 3, 0, 6};
  
  int n = arr.size();
  
  vector <int> leader;
  
  for(int i =0;i<n;i++){
      for(int j=i;j<n;j++){
          if(arr[i] < arr[j]){
              break;
          }
          else if( j == n-1 ){
              leader.push_back(arr[i]);
          }
      }
  }
  for(int i=0;i<leader.size();i++){
      cout<<leader[i]<<" ";
  }
  
  return 0;
}