#include<bits/stdc++.h>
using namespace std;

int median(vector<vector<int>> &mat){
    int low = INT_MAX , high = INT_MIN;
    int m = mat.size();
    int n = mat[0].size();
    for(int i = 0 ; i<n ; i++){
        low = min(low , mat[i][0]);
        high = max(high , mat[i][m-1]);
    }
    int req = (m*n)/2;
    while (low<=high)
    {
        int mid = (low+high)/2;
        int smallequal = countSmallEqual(mat ,m , n , mid);
        if(smallequal <= req){
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
    return low;
    

}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3, 4, 5},
        {8, 9, 11, 12, 13},
        {21, 23, 25, 27, 29}
    };
    
    int ans = median(matrix);
    cout << "The median element is: " << ans << endl;
    return 0;
}