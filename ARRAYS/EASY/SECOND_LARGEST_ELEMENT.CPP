#include <bits/stdc++.h>
using namespace std;

int second_largest(vector<int> &arr, int n)
{
    int largest = arr[0];
    int slargest = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            slargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > slargest)
        {
            slargest = arr[i];
        }
    }
    return slargest;
}

int second_smallest(vector<int> &arr, int n)
{
    int smallest = arr[0];
    int ssmallest = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            ssmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] != smallest && arr[i] < ssmallest)
        {
            ssmallest = arr[i];
        }
    }
    return ssmallest;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int slargest = second_largest(arr, n);
    int ssmallest = second_smallest(arr, n);
    cout << "Second largest element is:" << slargest << endl
         << "Second smallest element is:" << ssmallest;
}
