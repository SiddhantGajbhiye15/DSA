#include<bits/stdc++.h>
using namespace std;
int main(){

  int prices[] = {7,5,6,4,3,7,13};
    //Brute force approach
    int n =  sizeof(prices)/sizeof(prices[0]);
    int maxProfit = 0; int minPrice = INT_MAX;
    for(int price : prices){
        if(minPrice > price){
            minPrice = price;
        }
        else if(price - minPrice > maxProfit){
            maxProfit = price - minPrice;
        }
    }

    cout<<maxProfit<<endl;

    // int currentProfit =0;
    // int profit= 0;
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;i<n;j++){
    //         currentProfit  = arr[i] - arr[j];
            
    //         if(currentProfit > profit){
    //             profit  = currentProfit;
    //         }
    //     }
    // }
    // cout<<profit;




  return 0;
}
