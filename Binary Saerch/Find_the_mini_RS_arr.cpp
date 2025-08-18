//Here RS stands for Rotated Sorted arr;
#include<bits/stdc++.h>
using namespace std;

int Mini_element_in_RS_Arr(vector<int>&arr){
    int n = arr.size();
    int low = 0 , high = n-1;
    int mini = INT_MAX;
    while (low<=high)
    {
        int mid = (low+high)/2;
        //if low is less than high
        if(arr[low]<=arr[high]){
            if(arr[low] <= mini){
                mini = arr[low];
            }
            break;
        }

        //if left part is sorted then update mini and eliminate the left part
        if(arr[low] <= arr[mid]){
            if(arr[low] <= mini){
                mini = arr[low];
            }
            low = mid+1;
        }else{
            if(arr[mid] <= mini){
                mini = arr[mid];
            }
            high = mid-1;
        }
    }
    return mini;
    
}

int main(){
    vector<int> arr = {7,8,9,1,2,3,4};
    cout<< Mini_element_in_RS_Arr(arr);
}