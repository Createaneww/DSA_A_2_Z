#include<bits/stdc++.h>
using namespace std;

int findLengthOfLCIS(vector<int>& nums) {
        int cnt = 1;
        int maxi = 1;
        for(int i = 1 ; i<nums.size() ; i++){
            if(nums[i] > nums[i-1]){
                cnt++;
                maxi = max(maxi , cnt);
            }
            else{
                cnt = 1;
            }
        }
        return maxi;
    }
int main(){
    vector<int>nums = {1,3,5,4,7};
    cout<<findLengthOfLCIS(nums);
}