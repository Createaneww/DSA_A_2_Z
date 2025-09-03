#include<bits/stdc++.h>
using namespace std;
//brute Tc- o(NxM)
vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int maxi = INT_MIN;
        int n = mat.size();
        int m = mat[0].size();
        int rowInd = -1 , colInd = -1;
        for(int i = 0 ; i<n ; i++){
            for(int j = 0 ; j<m ; j++){
                if(mat[i][j]>maxi){
                    rowInd=i;
                    colInd =j;
                    maxi = mat[i][j];
                }
            }
        }
        return{rowInd , colInd};
    }

int main(){
vector<vector<int>>mat = {{1,4},{3,2}};
vector<int>result = findPeakGrid(mat);
for(auto it: result){
    cout<<it<<" ";
}

}