#include<bits/stdc++.h>
using namespace std;

//brute same as 3sum brute

//better same as 3sum;

//optimal also similar like 3sum
vector<vector<int>>Optimal4Sum(vector<int>&arr , int target){
    sort(arr.begin() , arr.end());
    int n = arr.size();
    vector<vector<int>>ans;
    for (int i = 0; i < n; i++)
    {
        if(i>0 && arr[i] == arr[i-1])continue;
        for (int j = i+1; j < n; j++)
        {
            if(j != i+1 && arr[j] == arr[j-1]) continue;
            int k = j+1;
            int l = n-1;
            while (k<l)
            {
                int sum = arr[i]+arr[j];
                sum+= arr[k];
                sum += arr[l];
                if(sum<target){
                    k++;
                }
                else if(sum>target){
                    l--;
                }else{
                    vector<int>temp = {arr[i] , arr[j] , arr[k] , arr[l]};
                    ans.push_back(temp);
                    k++;
                    l--;
                    while(k<l && arr[k] == arr[k-1])k++;
                    while(k<l && arr[l] == arr[l+1])l--;

                }
            }
            
            
        }
        
    }
    return ans;
    
}


int main(){
    vector<int>arr  = {1, 1 , 2 , 3 , 4 , 4 , 5 , 1};
    int target;
    cout<<"Enter the target";
    cin>>target;

    vector<vector<int>> result = Optimal4Sum(arr , target);

    for(int i = 0 ; i<result.size(); i++){
        for (int j = 0; j < result[i].size(); j++)
        {
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
        
    }
}