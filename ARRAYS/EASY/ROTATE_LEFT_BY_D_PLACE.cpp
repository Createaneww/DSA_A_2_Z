#include<bits/stdc++.h>
using namespace std;
void rotate_left_by_d_places(int arr[],int n,int d){
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);

}
int main(){
int n,d;
cin>>n;
cin>>d;
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
rotate_left_by_d_places(arr,n,d);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

}