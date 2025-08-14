#include<bits/stdc++.h>
using namespace std;
int lowerbound(vector<int>&arr , int x){  // tc = o(logn) base 2;
    int n = arr.size();
    int low = 0 , high = n-1;
    int ans = n;
    while (low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid] >= x){   // we get the ans look for left for more smaller;
            ans = mid;  //storing index in ans variable
            high = mid-1;
        }else{ //looking for right
            low = mid+1;
        }
    }
    return ans;
    
}


int uperbound(vector<int>&arr , int x){
    int n = arr.size();
    int low = 0 , high = n-1;
    int ans = n;
    while (low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid]>x){
            ans = mid;
            high = mid-1;
        }else{
            low = mid+1;
        }
    }
    
}
int main(){
    int x;
    cin>>x;
    vector<int>arr = {1,2,3,3,5,8,8,10,10,11};
    //lower bound(index of the ele i.e arr[i]>=target(x))
    // cout<<lowerbound(arr , x);

    //uper bound(index of the ele i.e arr[i]>target(x))
    cout<<uperbound(arr , x);
}