#include<bits/stdc++.h>
using namespace std;

int search(vector<int>&arr , int target){
    int n = arr.size();
    int low = 0  , high = n-1;
    while (low<=high)
    {
        int mid = (low + high)/2;
        if(arr[mid] == target) return mid;
        if(arr[low] <= arr[mid]){  //ensure left is sorted
            if(arr[low] <= target && target <= arr[mid]){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        else{ // else right is sorted
            if(arr[mid] <= target && target <= arr[high]){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
    }
    return -1;

}


int main(){
    int target;
    cin>>target;
    vector<int> arr = {4,5,6,7,0,1,2};
    cout<< search(arr , target);
}