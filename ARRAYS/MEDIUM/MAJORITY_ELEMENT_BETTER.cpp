#include<bits/stdc++.h>
using namespace std;
int majorityElement(int arr[],int n) {
	map<int,int>mpp;
	for(int i=0;i<n;i++){
		mpp[arr[i]]++;
	}
	for(auto it:mpp){
		if(it.second>n/2){
			return it.first;
		}
	}
	return -1;
}
int main(){
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<majorityElement(arr,n);
}