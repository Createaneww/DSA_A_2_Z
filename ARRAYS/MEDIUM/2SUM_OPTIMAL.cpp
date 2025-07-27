#include<bits/stdc++.h>
using namespace std;
string twosum_optimal(int arr[],int n,int target){
    int left=0;
    int right = n-1;
    sort(arr,arr+n);
    while(left<right){
        int sum=arr[left]+arr[right];
        if(sum==target){
            return "YES";
        }
        else if(sum<target){
            left++;
        }
        else{right--;}
    }
    return "NO";


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
    int target;
    cout<<"enter target:";
    cin>>target;
    cout<<twosum_optimal(arr,n,target);
}