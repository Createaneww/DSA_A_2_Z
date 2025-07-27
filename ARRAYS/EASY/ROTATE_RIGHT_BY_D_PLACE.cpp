#include<bits/stdc++.h>
using namespace std;
vector<int> rotate_right_by_d_places(vector<int>arr,int n,int d){
    reverse(arr.begin(),arr.end());
    reverse(arr.begin(),arr.begin()+d);
    reverse(arr.begin()+d,arr.end());
return arr;
}
int main(){
int n,d;
cin>>n;
cin>>d;
vector<int>arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}
arr=rotate_right_by_d_places(arr,n,d);
for(auto it:arr){
    cout<<it<<" ";
};
}