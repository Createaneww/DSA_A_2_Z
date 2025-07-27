#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> rotateMatrix(vector<vector<int>> &mat){
	int n=mat.size();
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			swap(mat[i][j],mat[j][i]);
		}
	}
	for(int i=0;i<n;i++){
		reverse(mat[i].begin(),mat[i].end());
	}
	return mat;
}

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>> ans = rotateMatrix(matrix);

    cout << "The Final matrix is: "<<endl;
    for (auto it : ans) {
        for (auto ele : it) {
            cout << ele << " ";
        }
        
        cout<<endl;
    }
    return 0;
}