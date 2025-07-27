#include<bits/stdc++.h>
using namespace std;
int missing_elements(int arr[],int n){
   int XOR1=0;
   int XOR2=0;
   for (int i=0;i<n-1;i++){
       XOR2=XOR2^arr[i];
       XOR1=XOR1^(i+1);
   }
   XOR1=XOR1^n;
   return XOR1^XOR2;
}
int main(){
    int n;
    cin>>n;
    int arr [n];//ONLY ENTER ELEMENTS TILL THE NUMBER N
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    cout<<missing_elements(arr,n);

}