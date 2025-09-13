#include<bits/stdc++.h>
using namespace std;
 int maxFreqSum(string s) {
        int n = s.length();
        int maxvol = 0 , maxico = 0;
        int hasharr[256] = {0};
        for(auto ch : s){
            hasharr[ch]++;
        }
        for(auto it : s){
            if(it == 'a'|| it == 'e' || it == 'i' || it == 'o' || it == 'u'){
                maxvol = max(maxvol , hasharr[it]);
            }else{
                maxico = max(maxico , hasharr[it]);
            }
        }
    return (maxico + maxvol);
    }

    int main(){
        string s = "successes";   //vowels - u=1time , e = 2times max = 2
        cout<<maxFreqSum(s);      //consonants
    }