#include<bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target) {
        int low = 0 , high = nums.size()-1;
        while(low <= high){
            int mid = (low+high)/2;
            if(nums[mid] == target) return mid;
            else if(target > nums[mid]) low = mid+1;
            else high = mid-1;
        }
        return -1;
    }


// recursive approch
int bsReccursive(vector<int>&nums , int low , int high , int target){
        if(low > high) return -1;
        int mid = (low+high)/2;
        if(nums[mid] == target) return mid;
        else if(target > nums[mid]) return bsReccursive(nums , mid+1 , high, target);
        else return bsReccursive(nums , low , mid-1 , target);

    }
    int search_Recur(vector<int>& nums, int target) {
        return bsReccursive(nums , 0 , nums.size()-1 , target);
    }

int main(){
    vector<int> nums = {1,2,5,8,9,12,15,19};
    int target;
    cout<<"Enter the number you want to search"<<endl;
    cin>>target;

    // cout<<search(nums , target);
    cout<<search(nums , target);
}