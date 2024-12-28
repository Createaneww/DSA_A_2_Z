#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array:";
    cin >> n;
    int arr[n];
    cout<<"Enter elements of array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // pre computation
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
       
        
    }
    //  for(auto it:mpp){
    //         cout<<it.first<<"->"<<it.second<<endl;
    //     }

    int q; // no. of queries
    cout<<"Enter no. of queries";
    cin >> q;
    while (q--)
    {
        int num;
        cin >> num;
        // fetching
        cout <<mpp[num]<<endl;
    }
}