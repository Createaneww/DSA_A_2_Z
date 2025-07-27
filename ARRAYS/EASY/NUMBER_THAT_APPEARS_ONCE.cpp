#include<bits/stdc++.h>
using namespace std;
int number_that_appears_once(int arr[],int n){
    int XOR=0;
    for(int i=0;i<n;i++){
        XOR=XOR^arr[i];
    }
    return XOR;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<number_that_appears_once(arr,n);

}