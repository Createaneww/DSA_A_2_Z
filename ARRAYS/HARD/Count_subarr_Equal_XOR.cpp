#include<bits/stdc++.h>
using namespace std;
int Count_sub_arr_XOR(vector<int>&arr , int n , int k){
    unordered_map<int , int>mpp;
    mpp[0] = 1;
    int XOR = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        XOR = XOR^arr[i];
        if(XOR == k)cnt++;

        int x = XOR^k;
        if(mpp.find(x) != mpp.end()){
            cnt += mpp[x];
        }

        mpp[XOR] += 1;
    }
    return cnt;
    
}

int main(){
    int n ; 
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    vector<int>arr(n);

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int k;
    cout<<"Enter the xor k which you want to check"<<endl;
    cin>>k;

    cout<<Count_sub_arr_XOR(arr,  n ,  k );


    


}