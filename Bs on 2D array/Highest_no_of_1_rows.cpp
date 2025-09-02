#include<bits/stdc++.h>
using namespace std;
int lowerbound(vector<int>arr , int m , int x){
    int low = 0 , high = m-1;
    int ans = m;
    while (low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid]>= x){
            ans = mid;
            high = mid-1;
        }else{
            low = mid+1;
        }
    }
    return ans;
}
int rowWithMax1s(vector < vector < int >> & mat) {
    int m = mat[0].size();
    int n = mat.size();
    int maxi = 0;
    int index = -1;
    for(int i = 0 ; i<n ; i++){
        int cnt_ones = m - lowerbound(mat[i] , m , 1);
        if(cnt_ones > maxi){
            maxi = cnt_ones;
            index = i;
        }
    }
    return index;
      
  }

int main(){
    vector<vector<int>>mat =  { {1, 1, 1}, {0, 0, 1}, {0, 0, 0} };
    cout<<rowWithMax1s(mat);
}