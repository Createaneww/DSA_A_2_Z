#include<bits/stdc++.h>
using namespace std;
int No_Of_SubStrings(string s){
    int n = s.length();
    int cnt = 0;
    for(int i = 0 ; i<n ; i++){ //one method to generate and count no of substrings
        for(int j = i ; j<n ;j++){
            cnt++;
        }
    }
    return cnt;
}
int main(){
    string s = "parth";
    cout<<No_Of_SubStrings(s);
}