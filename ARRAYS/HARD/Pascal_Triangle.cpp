#include<bits/stdc++.h>
using namespace std;
int nCr(int n , int r){   //10c3
    long long res = 1;  
    //calculating the ele
    for(int i = 0; i<r ; i++){;
        res = res*(n-i);
        res = res/(i+1);
    }
    return res;
}
int pascalTriangle(int r , int c){  //11c4
    int ele = nCr( r-1 ,  c-1);
    return ele;
}
int main(){
    int r , c;
    cout<<"Enter Row no"<<endl;
    cin>>r;
    cout<<"Enter coloumm no"<<endl;
    cin>>c;
    int element = pascalTriangle(r , c);
    cout<<"The value of element on rth row and cth coloumn is :"<<element;
    return 0;
} 