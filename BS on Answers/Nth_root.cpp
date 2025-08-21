#include<bits/stdc++.h>
using namespace std;
int nthRoot(int n , int m){
    int ans = -1;
    int low = 1 , high = m;
    while (low <= high)
    {
        int mid = (low + high)/2;
        int val = pow(mid , n);
        if(val == m){
            return mid;
        }else if(val < m){
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
    return ans;
    
}

int main(){
    int n , m;
    cout<<"Enter the Nth root you want to find"<<endl;
    cin>>n;

    cout<<"Enter the number";
    cin>>m;
    cout<< nthRoot(n , m);
}