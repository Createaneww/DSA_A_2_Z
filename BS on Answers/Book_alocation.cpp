#include<bits/stdc++.h>
using namespace std;

int countstud(vector<int> &nums  , int mid ){
        int student = 1;
        int pagesstudent = 0;
        for(int i = 0 ; i<nums.size() ; i++){
            if(pagesstudent + nums[i] <= mid){
                pagesstudent += nums[i];
            }else{
                student++;
                pagesstudent = nums[i];
            }
        }
        return student;
    }

    int findPages(vector<int> &nums, int m)  {
        int n = nums.size();
        if(m>n) return -1;
        int sum = 0 , maxi = INT_MIN;
        for(int i = 0 ; i<n ; i++){
            sum += nums[i];
            maxi = max(maxi , nums[i]);
        }

        int low = maxi , high = sum;
        
        while(low<=high){
            int mid = (low + high)/2;
            int student = countstud(nums , mid);
            if(student > m){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        return low;
    }
    int main(){
        int m;
        cin>>m;
        vector<int>nums = {10,24,32,11};
        cout<<findPages(nums , m);
    }