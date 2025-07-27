#include<bits/stdc++.h>
using namespace std;
int remove_duplicates(int arr[],int n){
int index=0;
for(int j=1;j<n;j++){
    if(arr[j]!=arr[index]){
        arr[index+1]=arr[j];
        index++;
    }
}
cout<<"New array consist of unique elements is:";
for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
return index+1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"No. of unique elements are:"<<remove_duplicates(arr,n)<<endl;
    
}