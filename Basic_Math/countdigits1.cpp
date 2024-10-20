#include <bits/stdc++.h>
using namespace std;
int count_digits1(int n)
{
    int cnt = 0;
    while (n > 0)
    {
        int ld = n % 10; // There is no significance of this only  for explanation
        cnt++;
        n = n / 10;
    }
    return cnt;
    
}

int main(){
    int n;
    cin>>n;
    
    cout<<count_digits1(n)<<endl;

    return 0;
}