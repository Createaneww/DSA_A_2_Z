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



//finding first occurrence
int firstOccur(vector<int>&arr , int target , int n){
    int low = 0 , high = n-1;
    int first = -1;
    while (low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid] == target){
            first = mid;
            high = mid-1;
        }
        else if(arr[mid] < target){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return first;

}

//finding last occurrence
int lastOccur(vector<int>&arr , int target , int n){
    int low = 0 , high = n-1;
    int last = -1;
    while (low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid] == target){
            last = mid;
            low = mid+1;
        }
        else if(arr[mid] < target){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return last;
    
}
vector<int> search_range(vector<int>&arr , int target){
    int n = arr.size();
    int first = firstOccur(arr , target , n);
    if(first == -1) return {-1 , -1};
    int last = lastOccur(arr , target , n);
    return {first , last};
}

int main(){
    int target;
    cin>>target;
    vector<int> arr = {2,4,6,8,8,8,11,13};

    // vector<int> result = first_last_occurr(arr , target);
    // vector<int> result = First_Last_Occur(arr , target);
    vector<int> result = search_range(arr , target);

    for (int i = 0; i < result.size(); i++)
    {
        cout<<result[i]<<" ";
    }
    
}