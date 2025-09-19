#include<bits/stdc++.h>
using namespace std;
int lengthOfLastWord(string s) {
        int n = s.length();
        int i = n-1;
        while(i >= 0 && s[i] == ' '){
            i--;
        }
        int cnt = 0;
        while(i >= 0 && s[i] != ' '){
            cnt++;
            i--;
        }
        return cnt;
    }
int main(){
     string s = " hello world  ";
     cout<<lengthOfLastWord(s);
}