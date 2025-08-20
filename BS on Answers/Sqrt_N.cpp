#include<bits/stdc++.h>
using namespace std;
//brute approach can be using a loop and tc o(n) worst case;

//Tc- o(log n)
long long floorSqrt(long long n)  {
      long long ans;
      int low = 1 , high = n;
      while(low<= high){
        long long mid = (low+high)/2;
        long long val = mid * mid;
        if(val <= (long long)(n)){
            low = mid+1;
        }else{
            high = mid-1;
        }
      }
      return high;
    }
int main(){
    int n;
    cin>>n;
    cout<<floorSqrt(n);
}