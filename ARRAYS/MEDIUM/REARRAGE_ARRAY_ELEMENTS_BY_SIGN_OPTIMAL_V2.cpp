#include<bits/stdc++.h>
using namespace std;
vector<int> alternate_sign(vector<int>arr){
  vector<int>pos,neg;
 int n=arr.size();
 for(int i=0;i<n;i++){
     if(arr[i]>0){
        pos.push_back(arr[i]);
     }
     else{
         neg.push_back(arr[i]);
     }
 }
 if(pos.size()>neg.size()){
     for(int i=0;i<neg.size();i++){
         arr[2*i]=pos[i];
         arr[2*i+1]=neg[i];
     }
     int index=neg.size()*2;
     for(int i=neg.size();i<pos.size();i++){
         arr[index]=pos[i];
         index++;
     }
 }
 else{
     for(int i=0;i<pos.size();i++){
         arr[2*i]=pos[i];
         arr[2*i+1]=neg[i];
     }
     int index=pos.size()*2;
     for(int i=pos.size();i<neg.size();i++){
         arr[index]=neg[i];
         index++;
     }
 }
 return arr;
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