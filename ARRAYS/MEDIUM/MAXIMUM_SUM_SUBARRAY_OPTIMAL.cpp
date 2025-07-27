#include<bits/stdc++.h>
using namespace std;
long long maxSubarraySum(int arr[], int n)
{
    // int ansstart=-1,ansend=-1; //for printing subarray
    long long sum=0;
    long long maxi=LONG_MIN;
    for(int i=0;i<n;i++){
        // if(sum==0){int start=i;}
        sum+=arr[i];
    
    if(sum>maxi){
        maxi=sum;
        // ansstart=start,ansend=i;
    }
    if (sum < 0) {
        sum = 0;
    }
    }
    if(maxi<0){
        maxi=0;
    }
    return maxi;


}
int main(){
     int n;
     cout<<"Enter size of array";
     cin>>n;
     int v[n];
     cout<<"Enter elements of array:";
    for(int i = 0 ; i<n ; i++){
      cin>>v[i];
    }
    
    cout<<maxSubarraySum(v,n);
    
}