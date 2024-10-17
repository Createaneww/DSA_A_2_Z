#include<bits/stdc++.h>
using namespace std;
int count_digits1(int n){
int cnt=0;
    while(n>0){
        int ld=n%10;//There is no significanc of this only  for explanation
        cnt++;
        n=n/10;
        
    }
    cout<<cnt;
}


int count_digits2(int n){
    int count=(int)(log10(n)+1);
    cout<<count;
}


void REVERSE_NUMBERS(int n){
    int rev_n=0;
	while(n>0){
		int ld=n%10;
		rev_n=(rev_n*10)+ld;
		n=n/10;

	}
	cout<<rev_n;
}


bool Palindrome(int n){
      int rev=0;
    int dup=n;
    while (n > 0) {
      int ld = n % 10;
      rev = (rev * 10) + ld;
      n = n / 10;
    }
    if(rev==dup)return true;
    else return false;
}


void checkArmstrong(int n){
	int dup=n;
	int sum=0;
    int numberofdigit=(int)(log10(n)+1);
	while(n>0){
		int ld=n%10;
		sum+=(pow(ld,numberofdigit));
		n=n/10;
	}
        if (sum == dup) {
                cout<<"amstrong";
        } else {
            cout<<"not amstrong";
        }
}


void printDivisors(int n){
vector<int>ls;
for(int i=1;i*i<=n;i++){
    if(n%i==0){
        ls.emplace_back(i);
        if((n/i)!=i){
            ls.emplace_back(n/i);
        }
    }
}
sort(ls.begin(),ls.end());
for(auto it : ls){
    cout<<it<<" ";
}
}


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

void gcd(int a,int b)
{
	for(int i=min(a,b);i>=1;i--){
		if(a%i==0 && b%i==0){
			cout<<i<<" ";
			break;
		}
	}
	
}
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
    int n;
    cin>>n;
    // int n2;
    // cin>>n2;
    checkArmstrong(n);
    
}