#include<bits/stdc++.h>
using namespace std;
vector<int> Move_Zero_at_end(vector<int> arr, int n){
    vector<int> temp;
    for(int i = 0 ; i<n ; i++){   // storing non zero ele in temp
        if(arr[i] != 0){
            temp.emplace_back(arr[i]);
        }
    }
    for(int i = 0 ; i< temp.size(); i++){  //throwing back non ele from temp to array
        arr[i] = temp[i];
    }
    for(int i = temp.size() ; i<n ; i++){
        arr[i] = 0;
    }
    return arr;
}
int main(){
    int n;
    cin>>n;
    cout<<"enter the elements of the arr"<<endl;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    arr= Move_Zero_at_end(arr , n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
} 

