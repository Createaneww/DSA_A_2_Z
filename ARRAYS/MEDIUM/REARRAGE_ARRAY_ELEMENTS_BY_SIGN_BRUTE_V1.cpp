#include<bits/stdc++.h>
using namespace std;
vector<int> alternate_sign(vector<int>a){
 vector<int>pos;
    vector<int>neg;
    for(int i=0;i<a.size();i++){
        if(a[i]>0){
            pos.push_back(a[i]);
        }
        else{
            neg.push_back(a[i]);
        }
    }
    for(int i=0;i<a.size()/2;i++){
        a[i*2]=pos[i];
        a[i*2+1]=neg[i];
    }
    return a;
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