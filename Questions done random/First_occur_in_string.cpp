#include<bits/stdc++.h>
using namespace std;

int strStr(string haystack, string needle) {
        int n = haystack.length();
        int m = needle.length();

        if (m == 0)return 0;
        if (m > n) return -1;

        for (int i = 0; i <= n - m; i++) {
            int j = 0;
            while (j < m && haystack[i + j] == needle[j]) {
                j++;
            }
            if (j == m)return i; // found match
        }
        return -1;
    }

int main(){
    string haystack = "abcde";
    string needle = "bcd";
    cout<<strStr(haystack , needle);
}