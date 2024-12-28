#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of array:";
    cin >> n;
    int arr[n];
    cout << "Enter elements of array:";
    for (int i = 0; i<n; i++)
    {
        cin >> arr[i];
    }
    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }
    int q;
    cout << "Enter no. of queries:";
    cin >> q;
    int num;
    while (q--)
    {
        cin >> num;
        cout << hash[num]<<endl;
    }
    return 0;
}