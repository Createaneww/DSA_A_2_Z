#include <bits/stdc++.h>
using namespace std;
int euclideans_algo_gcd(int a,int b)
{
while(a>0 && b>0){
	if(a>b){
		a=a%b;
	}
	else b=b%a;
}
if(a==0)cout<< b;
else cout<< a;
}
int main(){
    int n1,n2;
    cin>>n1;
    cin>>n2;
    
    euclideans_algo_gcd(n1,n2);

    return 0;
}