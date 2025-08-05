#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> triplet(int n, vector<int> &arr)
{
    
    set<vector<int>>st;
    for(int i = 0 ; i<n ; i++){
        set<int> hashset;
        for(int j = i+1 ; j<n ; j++){
            int thirdEle = -(arr[i] + arr[j]);
            if(hashset.find(thirdEle) != hashset.end()){ // if present in hashset
                vector<int>temp = {arr[i] , arr[j] , thirdEle};
                sort(temp.begin() , temp.end());
                st.insert(temp);
            }
            hashset.insert(arr[j]);
            

        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}

int main(){
    vector<int> a = {-1, 0, 1, 2, -1, -4};
    int n = a.size(); 
    vector<vector<int>> result = triplet(n, a);

    // Iterate over the result vector and print each triplet
    for (int i = 0; i < result.size(); i++) {
        cout << "["; 
        for (int j = 0; j < result[i].size(); j++) {
            cout << result[i][j];
            // if (j != result[i].size() - 1) {
            //     cout << ", "; // Print comma and space except for the last element
            // }
        }
        cout << "]" << endl; // End the triplet with a closing bracket and ne
    }
}
