#include<bits/stdc++.h>
using namespace std;
vector<int>optimal_missing_repeating(vector<int>&arr){
    long long n = arr.size();
    // S-Sn i.e x-y
    // S2-S2n i.e x+y
    long long Sn = (n*(n+1))/2;
    long long S2n = (n*(n+1)*(2*n+1))/6;
    long long S = 0 , S2 = 0;
    for (int i = 0; i < n; i++)
    {
        S += arr[i];
        S2 += (long long)arr[i] * (long long)arr[i];
    }
    long long val1 = S-Sn; //x-y
    long long val2 = S2 - S2n; //x^2-y^2
    val2 = val2/val1; // x+y
    long long x = (val1+val2)/2; //value of x
    long long y = x-val1; // value of y
    return {(int)x , (int)y};
    
}

int main(){
    vector<int>arr = {4,3,6,2,1,1};

    vector<int> result = optimal_missing_repeating(arr);

    for (int i = 0; i < result.size(); i++)
    {
        cout<<result[i]<<" ";
    }
    
}