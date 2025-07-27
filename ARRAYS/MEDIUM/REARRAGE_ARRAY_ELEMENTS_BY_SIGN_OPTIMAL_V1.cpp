#include<bits/stdc++.h>
using namespace std;
vector<int> alternate_sign(vector<int>arr){
  int n=arr.size();
  vector<int>ans(n);
  int posIndex=0;
  int negIndex=1;
  for(int i=0;i<n;i++){
      if(arr[i]<0){
          ans[negIndex]=arr[i];
          negIndex+=2;
      }
      else{
          ans[posIndex]=arr[i];
          posIndex+=2;
      }
  }
  return ans;
}
int main(){
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter elements of array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    arr=alternate_sign(arr);
    for(auto it:arr){
        cout<<it<<" ";
    }

}