#include <bits/stdc++.h>
using namespace std;

bool checkHasZero(int num)
{
    while (num > 0)
    {
        if (num % 10 == 0)
            return false;
        num = num / 10;
    }
    return true;
}
vector<int> getNoZeroIntegers(int n)
{
    if (n == 2)
        return {1, 1};
    for (int a = 1; a < n; a++)
    {
        int b = n - a;
        if (checkHasZero(a) && checkHasZero(b))
            return {a, b};
    }
    return {};
}

int main()
{
    int n;
    cin >> n;
    vector<int> result = getNoZeroIntegers(n);
    for (auto it : result)
    {
        cout << it << " ";
    }
}