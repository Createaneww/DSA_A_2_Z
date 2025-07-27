#include<bits/stdc++.h>
using namespace std;
int majority_element(int v[],int n){
    
  int cnt = 0;
  int el;
  for (int i = 0; i < n; i++) {
    if (cnt == 0) {
      cnt = 1;
      el = v[i];

    } else if (v[i] == el) {
      cnt++;
    } else {
      cnt--;
    }
  }
  int cnt1 = 1;
  for (int i = 0; i < n; i++) {
    if (v[i] == el)
      cnt1++;
  }
  if (cnt1 > n / 2) {
    return el;
  }

return -1;
}
int main(){
     int n;
     cout<<"Enter size of array";
     cin>>n;
     int v[n];
     cout<<"Enter elements of array:";
    for(int i = 0 ; i<n ; i++){
      cin>>v[i];
    }
    
    cout<<majority_element(v,n);
    
}