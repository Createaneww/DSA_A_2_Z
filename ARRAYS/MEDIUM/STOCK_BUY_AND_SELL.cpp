#include<bits/stdc++.h>
using namespace std;
int maximumProfit(int prices[],int n){
    int mini=prices[0];
    int maxprofit=0;
    for(int i=0;i<n;i++){
        int cost=prices[i]-mini;
        maxprofit=max(maxprofit,cost);
        mini=min(mini,prices[i]);
        
    }
    return maxprofit;
}
int main(){
     int n;
     cout<<"Enter no. of days:";
     cin>>n;
     int prices[n];
     cout<<"Enter prices:";
    for(int i = 0 ; i<n ; i++){
      cin>>prices[i];
    }
    
    cout<<maximumProfit(prices,n);
}
