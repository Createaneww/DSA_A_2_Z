#include<bits/stdc++.h>
using namespace std;
//brute
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

//better
vector<vector<int>> ThreeSumUsingHashset(vector<int>&arr){
    set<vector<int>>st;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        set<int>hashset;
        for(int j = i+1 ; j<n ; j++){
            int thirdEle = -(arr[i]+arr[j]);
            if(hashset.find(thirdEle) != hashset.end()){
                vector<int>temp = {arr[i] , arr[j] , thirdEle};
                sort(temp.begin() , temp.end());
                st.insert(temp);
            }
            hashset.insert(arr[j]);
        }
    }
    vector<vector<int>>ans(st.begin() , st.end());
    return ans;
}

//Optimal
vector<vector<int>> Optimal3Sum(vector<int>&arr){
    vector<vector<int>>ans;
    int n = arr.size();
    sort(arr.begin() , arr.end());
    for (int i = 0; i < n; i++)
    {
        if(i>0 && arr[i] == arr[i-1]) continue;
        int j = i+1;
        int k = n-1;
        while (j<k)
        {
            int sum = arr[i]+arr[j];
            sum+=arr[k];
            if(sum>0){
                k--;
            }
            else if(sum<0){
                j++;
            }
            else{
                vector<int>temp = {arr[i] , arr[j] , arr[k]};
                ans.push_back(temp);
                j++;
                k--;
                while(j<k && arr[j] == arr[j-1])j++;
                while(j<k && arr[k]== arr[k-1])k--;
            }
        }
    }
    return ans;
    
}
int main(){
    vector<int>arr  = {-1 , 0 , 1 , 2 , -1 , -4};

    // vector<vector<int>> result = ThreeSumBrute(arr);
    // vector<vector<int>> result = ThreeSumUsingHashset(arr);
    vector<vector<int>> result = Optimal3Sum(arr);

    for(int i = 0 ; i<result.size(); i++){
        for (int j = 0; j < result[i].size(); j++)
        {
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
        
    }
}