#include<bits/stdc++.h>
using namespace std;
int Peak_element(vector<int> &arr){
    int n = arr.size();
    if(n == 1 && arr[0] > arr[1]) return arr[0];
    if(arr[n-1] > arr[n-2]) return arr[n-1];
    int low = 1 , high = n-2;
    while (low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]> arr[mid+1]){
            return arr[mid];
        }
        else if(arr[mid] < arr[mid+1]){
            //we are at left peak will be in right
            low = mid+1;
        }else{
            //we are at right peak will be in left
            high = mid-1;
        }
    }
    return -1;
    
}

int main(){
    vector<int> arr = {1,2,1,3,5,6,4};
    cout<<Peak_element(arr);
}