#include<bits/stdc++.h>
using namespace std;

vector<int> type2_pascal(int n){
    vector<int>result;
    int ans = 1;
    result.push_back(ans);
    for (int i = 1; i < n; i++)
    {
        ans = ans*(n-i);
        ans = ans/i;
        result.push_back(ans);
    }
    return result;
    
}

int main(){
    int r;
    cout<<"Enter the row number you want to print";
    cin>>r;

    vector<int> result = type2_pascal(r);
     for (int i = 0; i < result.size(); i++)
     {
        cout<<result[i]<<" ";
     }
     
}