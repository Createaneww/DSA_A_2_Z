#include<bits/stdc++.h>
using namespace std;
int fibbonacci(int n){
    if(n<=1)return n;
    return fibbonacci(n-1)+fibbonacci(n-2);
}
int main(){
    int n;
    cout<<"Enter the nth term :";
    cin>>n;
    cout<<fibbonacci(n);
}