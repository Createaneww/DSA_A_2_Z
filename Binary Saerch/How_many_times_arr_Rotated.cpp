
#include<bits/stdc++.h>
using namespace std;

int Mini_element_in_RS_Arr(vector<int>&arr){
    int n = arr.size();
    int low = 0 , high = n-1;
    int mini = INT_MAX;
    int index = -1;
    while (low<=high)
    {
        int mid = (low+high)/2;
        //if low is less than high
        if(arr[low]<=arr[high]){
            if(arr[low] <= mini){
                index = low;
                mini = arr[low];
            }
            break;
        }

        //if left part is sorted then update mini and eliminate the left part
        if(arr[low] <= arr[mid]){
            if(arr[low] <= mini){
                index = low;
                mini = arr[low];
            }
            low = mid+1;
        }else{
            if(arr[mid] <= mini){
                index = mid;
                mini = arr[mid];
            }
            high = mid-1;
        }
    }
    return index;
    
}


int main(){
    vector<int> arr = {3,4,5,1,2};
    cout<< Mini_element_in_RS_Arr(arr);
}