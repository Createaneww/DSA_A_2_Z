#include<bits/stdc++.h>
using namespace std;
vector<int>generateRow(int row){
    long long ans = 1;
    vector<int>ansRow;
    ansRow.push_back(1);
    for(int col = 1; col<row; col++){
        ans = ans*(row-col);
        ans = ans/(col);
        ansRow.push_back(ans);
    }
    return ansRow;
}

vector<vector<int>> pascalTriangle(int N) {
    vector<vector<int>> ans;
    for(int i = 1 ; i<=N ; i++){
        ans.push_back(generateRow(i));
    }
    return ans;
}
int main(){
    int rownumber;
    cout<<"Enter no of row you want in yoour triangle";
    cin>>rownumber;
    vector<vector<int>>result = pascalTriangle(rownumber);
    for(int i = 0 ; i<rownumber ; i++){
        for(int j = 0 ; j<=i; j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}