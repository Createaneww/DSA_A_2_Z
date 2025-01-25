#include<bits/stdc++.h>
using namespace std;
void fact(int i,int facto){
    if(i<1){
    cout<<facto;
    return;
    }
    fact(i-1,facto*i);
    
}
int main(){
    int n;
    cin>>n;
    fact(n,1);
}