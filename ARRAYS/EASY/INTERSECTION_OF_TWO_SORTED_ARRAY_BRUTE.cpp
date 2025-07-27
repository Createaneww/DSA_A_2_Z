#include<bits/stdc++.h>
using namespace std;
vector<int> intersection_of_arrays(vector<int>a,vector<int>b){

    int n1=a.size();
    int n2=b.size();
    vector<int>ans;
    vector<int>vis(n2,0);
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(a[i]==b[j]&&vis[j]==0){
                ans.push_back(a[i]);
                vis[j]=1;
                break;
            }
            else if(b[j]>a[i]){
                break;
            }
        }
        
    }
    return ans;
}
int main() {
    
  // Array Initialisation.
  vector < int > A {1,2,2,3,3,4,5,6};
  vector < int > B {2,3,3,5,6,6,7};

  vector<int> ans = intersection_of_arrays(A,B);
  
  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << " ";
  }

  return 0;
}