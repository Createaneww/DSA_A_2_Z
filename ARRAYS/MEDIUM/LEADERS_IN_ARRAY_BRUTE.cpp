#include<bits/stdc++.h>
using namespace std;
vector<int> superiorElements(int a[],int n) {
    vector<int> ans;
    for (int i = 0; i < n; i++) {
      bool leader = true;
      for (int j = i + 1; j < n; j++) {
        if (a[j] > a[i]) {
          leader = false;
          break;
        }
      }
      if (leader) {
        ans.push_back(a[i]);
      }
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main(){
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    int arr[n];
    cout<<"ENTER ELEMENTS:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>ans=superiorElements(arr,n);
    for(auto it:ans){
        cout<<it<<" ";
    }
}