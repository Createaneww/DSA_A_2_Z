//we have to find the minimun speed at which koko can eat banana 
// speed = bananas/hours

#include<bits/stdc++.h>
using namespace std;
int maxeleinArr(vector<int>&piles){
    int Maxi = INT_MIN;
    for(int i = 0 ; i<piles.size() ; i++){
        Maxi = max(Maxi , piles[i]);
    }
    return Maxi;
}

double Calculate_total_hrs(vector<int>&piles , int mid){
    double TotalHrs = 0;
    for (int i = 0; i < piles.size(); i++)
    {
        TotalHrs += ceil((double)piles[i]/mid);
    }
    return TotalHrs;
    
}
int MinEatingSpeed(vector<int>&piles , int h){
    int ans = -1;
    int low = 1 , high = maxeleinArr(piles);
    while (low<=high)
    {
        int mid = (low+high)/2;
        double TotalHrs = Calculate_total_hrs(piles, mid);
        if(TotalHrs <= h){
            ans = mid;
            high = mid-1; // as we want minimum
        }else{
            low = mid+1;
        }
    }
    return ans;
     
}

int main(){
    int h = 8;
    vector<int> piles = {3,6,7,11};
    cout<<MinEatingSpeed(piles , h);
}