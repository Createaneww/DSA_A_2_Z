#include<bits/stdc++.h>
using namespace std;
int longestSuccessiveElements(int a[],int n) {
   sort(a,a+n);
   int cntcurr=0;
   int lastsmallest=INT_MIN;
   int longest=1;
   for(int i=0;i<n;i++){
       if((a[i]-1)==lastsmallest){
           cntcurr=cntcurr+1;
           lastsmallest=a[i];
       }
       else if(a[i]!=lastsmallest){
           cntcurr=1;
           lastsmallest=a[i];
       }
       longest=max(longest,cntcurr);
   }
   return longest;
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
    cout<<longestSuccessiveElements(arr,n);
}
