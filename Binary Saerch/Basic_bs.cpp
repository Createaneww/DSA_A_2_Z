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

int main(){
    vector<int> nums = {1,2,5,8,9,12,15,19};
    int target;
    cout<<"Enter the number you want to search"<<endl;
    cin>>target;

    cout<<search(nums , target);
}