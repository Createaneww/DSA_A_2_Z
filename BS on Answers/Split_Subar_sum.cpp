#include<bits/stdc++.h>
using namespace std;

int cntsubarr(vector<int>&nums , int mid){
        int cntsubarr = 1, sumarr = 0;
        for(int i = 0 ; i<nums.size() ; i++){
            if((sumarr + nums[i]) <= mid){
                sumarr += nums[i];
            }else{
                cntsubarr++;
                sumarr = nums[i];
            }
        }
        return cntsubarr; 
    }
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
    int maxi = INT_MIN, sum = 0;
    for (int x : nums) {
        maxi = max(maxi, x);
        sum += x;
    }

        int low = maxi  , high = sum , ans = sum;
        while(low<=high){
            int mid = (low+high)/2;
            int val = cntsubarr(nums , mid);
            if(val <= k){
                ans = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return ans;
    }
int main(){
    int k;
    cin>>k;
    vector<int>nums = {7,2,5,10,8};
    cout<<splitArray(nums , k);
}