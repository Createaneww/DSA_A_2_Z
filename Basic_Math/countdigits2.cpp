#include <bits/stdc++.h>
using namespace std;

int count_digits2(int n)
{
    int count = (int)(log10(n) + 1);
    return count;
}
int main(){
    int n;
    cin>>n;
    cout<<count_digits2(n);

    return 0;
}