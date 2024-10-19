#include <bits/stdc++.h>
using namespace std;
void checkprime(int n){
	int cnt=0;
	for(int i=1;i*i<=n;i++){
		if(n%i==0){
			cnt++;
			if((n/i)!=i){
				cnt++;
			}

		}
	}
	if(cnt==2)cout<<"Prime";
	else cout<<"Not prime";
}
int main(){
    int n;
    cin>>n;
    
    checkprime(n);

    return 0;
}