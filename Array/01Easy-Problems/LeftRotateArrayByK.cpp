# include <bits/stdc++.h>
using namespace std;

void reverse(int arr[],int start,int end){
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main(){
  
  int arr[]={1,2,3,4,5};
  
  int n=sizeof(arr)/sizeof(int);
    
  int k;
  cout<<"Enter the value of k: ";
  cin>>k;
  cout<<endl;
  k=k%n;

  reverse(arr,0,k-1);
  reverse(arr,k,n-1);
  reverse(arr,0,n-1);

  cout<<"printing the rotated array ...."<<endl;
  for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
  }
}