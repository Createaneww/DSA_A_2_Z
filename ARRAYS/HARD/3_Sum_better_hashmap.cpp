#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> ThreeSumBrute(vector<int>&arr){
    set<vector<int>>st;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            for (int k = j+1; k < n; k++)
            {
                int sum = arr[i]+arr[j];
                sum += arr[k];

                if(sum == 0){
                    vector<int>temp = {arr[i] , arr[j] , arr[k]};
                    sort(temp.begin() , temp.end());
                    st.insert(temp);
                }
            }
            
        }
        
    }
    vector<vector<int>>ans(st.begin() , st.end());
    return ans;
    
}

int main(){
    vector<int>arr  = {-1 , 0 , 1 , 2 , -1 , -4};

    vector<vector<int>> result = ThreeSumBrute(arr);

    for(int i = 0 ; i<result.size(); i++){
        for (int j = 0; j < result[0].size(); j++)
        {
            cout<<result[i][j];
        }
        cout<<" ";
        
    }
}