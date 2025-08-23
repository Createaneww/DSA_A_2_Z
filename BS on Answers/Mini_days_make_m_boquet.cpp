#include<bits/stdc++.h>
using namespace std;
bool isPossible(vector<int>&bloomDay , int mid , int m  , int k){
    int n = bloomDay.size();
    int cnt = 0 , noofB = 0;
    for (int i = 0; i < n; i++)
    {
        if(bloomDay[i] <= mid){
            cnt++;
        }else{
            noofB += (cnt/k);
            cnt = 0;
        }
    }
    noofB += (cnt/k);
    return noofB >= m;
    
}
int minidays(vector<int>&bloomDay , int m , int k){
    int ans = -1;
    long long val = m * 1ll * k * 1ll;
    int n = bloomDay.size();
    if(val > n) return -1;

    int mini = INT_MAX , maxi = INT_MIN;
    for(int i = 0 ; i<n ; i++){
        mini = min(mini , bloomDay[i]);
        maxi = max(maxi , bloomDay[i]);
    }
    int low = mini , high = maxi;
    while (low<=high)
    {
        int mid = (low+high)/2;
        if(isPossible(bloomDay , mid , m , k)){
            ans = mid;
            high = mid-1;
        }else{
            low = mid+1;
        }
    }
    return ans;
    
}
int main(){
    int m , k;
    cin>>m;
    cin>>k;
    vector<int> bloomDay = {1,10,3,10,2};
    cout<<minidays(bloomDay , m , k);

}