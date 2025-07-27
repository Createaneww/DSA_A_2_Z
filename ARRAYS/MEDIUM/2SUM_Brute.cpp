#include<bits/stdc++.h>
using namespace std;
vector<int>ans;
vector<int> two_sumproblem(int arr[],int n,int target){
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j)continue;
            if(arr[i]+arr[j]==target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
                
            }
        }
        
    }
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
    cout<<"Enter the target sum:";
    cin>>target;
    two_sumproblem(arr,n,target);
    cout<<"The elements which are having sum of "<<target<<" are at :";
    for(auto it:ans){
        cout<<it<<" ";
    }
}