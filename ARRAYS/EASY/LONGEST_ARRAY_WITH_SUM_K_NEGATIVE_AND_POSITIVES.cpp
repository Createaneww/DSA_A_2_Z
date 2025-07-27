#include<bits/stdc++.h>
using namespace std;
int getLongestSubarray(vector<int>& nums, int k){
   map<long long,int>presummap;
long long sum=0;
int maxlen=0;
for(int i=0;i<nums.size();i++){

  sum+=nums[i];
  if(sum==k){
    maxlen=max(maxlen,i+1);
  }
  long long rem=sum-k;
  if(presummap.find(rem)!=presummap.end()){
    int len=i-presummap[rem];
    maxlen=max(maxlen,len);
  }
  if(presummap.find(sum)==presummap.end()){
    presummap[sum]=i; //FOR ZEROES IN IT
  }
  // presummap[sum]=i;

}
return maxlen;
}
int main(){
    int n;
    cin>>n;
    vector<int>a;
    for(int i=0;i<a.size();i++){
        cin>>a[i];
    }
    int k;
    cout<<"Enter the value of k:";
    cin>>k;
    cout<<getLongestSubarray(a,k);

}