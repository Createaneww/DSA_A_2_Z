#include<bits/stdc++.h>
using namespace std;
//brute
vector<int> first_last_occurr(vector<int>&arr , int target){
    int n = arr.size();
    int first = -1 , last = -1;

    for(int i = 0 ; i<n ; i++){
        if(arr[i] == target){
            if(first == -1) first = i;
            last = i;
        }
    }
    return {first , last};
}


//optimal using lower_bound & upper_bound
vector<int> First_Last_Occur(vector<int> &arr , int target){
    int n = arr.size();
    int lb = lower_bound(arr.begin() , arr.end() , target) - arr.begin();
    if(lb == n || arr[lb] != target) return {-1 , -1};
    int Up = upper_bound(arr.begin() , arr.end() , target) - arr.begin();
    return {lb , Up-1};
}


int main(){
    int target;
    cin>>target;
    vector<int> arr = {2,4,6,8,8,8,11,13};

    // vector<int> result = first_last_occurr(arr , target);
    vector<int> result = First_Last_Occur(arr , target);
    for (int i = 0; i < result.size(); i++)
    {
        cout<<result[i]<<" ";
    }
    
}