#include<bits/stdc++.h>
using namespace std;
int max_consecutive_1(int n,int arr[]){
   int maxi=0;
    int cnt=0;
    for (int i=0;i<n;i++){
        if(arr[i]==1){
            cnt++;
            maxi=max(cnt,maxi);

        }
        else{
            cnt=0;
        }
    }
    return maxi;
}


int main(){
int n;
cin>>n;
int arr[n];
cout<<"Enter elements of array:";
for (int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<max_consecutive_1(n,arr);
}