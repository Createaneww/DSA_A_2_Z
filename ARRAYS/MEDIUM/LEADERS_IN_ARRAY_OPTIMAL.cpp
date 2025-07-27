#include <bits/stdc++.h>
using namespace std;
vector<int> superiorElements(int a[], int n)
{

    vector<int> ans;

    int maxi = INT_MIN;
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] > maxi)
        {
            ans.push_back(a[i]);
        }
        maxi = max(maxi, a[i]);
    }
    sort(ans.begin(), ans.end());
    return ans;
}
int main()
{
    int n;
    cout << "Enter size of array:";
    cin >> n;
    int arr[n];
    cout << "ENTER ELEMENTS:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> ans = superiorElements(arr, n);
    for (auto it : ans)
    {
        cout << it << " ";
    }
}