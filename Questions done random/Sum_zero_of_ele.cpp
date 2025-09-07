#include<bits/stdc++.h>
using namespace std;
vector<int> sumZero(int n) {
        vector<int>ans;
        if(n == 0 || n == 1) return {0};
        if(n%2 == 1){  //n = odd
            n = n-1;
            n = n/2;
            for(int i = -n ; i<=n ; i++){
                ans.push_back(i);
            }
        }else{  //n = even
            n = n/2;
            for(int i = -n ; i<=n ; i++){
                if(i == 0) continue;
                ans.push_back(i);
            }
        }
        return ans;
    }
    int main(){
        int n;
        cin>>n;
        vector<int>result = sumZero(n);
        for(auto it: result){
            cout<<it<<" ";
        }
    }