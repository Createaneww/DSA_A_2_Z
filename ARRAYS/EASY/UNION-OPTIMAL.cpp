#include<bits/stdc++.h>
using namespace std;

vector < int > UNI(vector < int > a, vector < int > b) {
    int n1=a.size();
    int n2=b.size();
  int i=0;
  int j=0;
  vector<int>unionarr;
  while(i<n1 && j<n2){
      if(a[i]<=b[j]){
          if(unionarr.size()==0||unionarr.back()!=a[i]){
              unionarr.push_back(a[i]);
          }
          i++;
      }
      else{
          if(unionarr.size()==0 || unionarr.back()!=b[j]){
              unionarr.push_back(b[j]);
          }
          j++;
      }
  }
  while(j<n2){
      if(unionarr.size()==0||unionarr.back()!=b[j]){
              unionarr.push_back(b[j]);
          }
          j++;
  }
  while (i<n1){
      if(unionarr.size()==0||unionarr.back()!=a[i]){
              unionarr.push_back(a[i]);
          }
          i++;
      }
      return unionarr;
  }
int main(){
        int n1;
    cin>>n1;
    vector<int>a(n1);
    cout<<"Enter elements of first array:";
    for(int i=0;i<n1;i++){
        cin>>a[i];
    }
    int n2;
    cin>>n2;
    vector<int>b(n2);
    cout<<"Enter elements of second array:";
    for(int i=0;i<n2;i++){
        cin>>b[i];
    }
    vector<int>uni;
   uni=UNI(a,b);
   for(auto it: uni){
    cout<<it<<" ";
   }
}