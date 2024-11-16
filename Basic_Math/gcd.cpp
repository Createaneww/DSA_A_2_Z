#include <bits/stdc++.h>
using namespace std;
void gcd(int a,int b)
{
	for(int i=min(a,b);i>=1;i--){
		if(a%i==0 && b%i==0){
			cout<<i<<" ";
			break;
		}
	}
	
}
int main(){
    int n1,n2;
    cin>>n1;
    cin>>n2;
    
    gcd(n1,n2);

    return 0;
}