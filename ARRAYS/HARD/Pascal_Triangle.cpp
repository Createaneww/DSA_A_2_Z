#include<bits/stdc++.h>
using namespace std;
int NCR(int n , int r){
    int res = 1;
    for(int i = 0 ; i<r ; i++){
        res = res*(n-i);
        res = res/(i+1);
    }
    return res;
}

int Typ1_Pascal_triangle(int r , int c){
    int res = NCR( r-1 ,  c-1);
    return res;
}


int main(){
    int r , c;
    cout<<"Enter Row no"<<endl;
    cin>>r;
    cout<<"Enter coloumm no"<<endl;
    cin>>c;
    // int element = pascalTriangle(r , c);
    int element = Typ1_Pascal_triangle(r , c);
    cout<<"The value of element on rth row and cth coloumn is :"<<element;
    return 0;
} 