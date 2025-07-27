#include<bits/stdc++.h>
using namespace std;
vector<int> majorityElement(vector<int> v) {
	int n = v.size();
	vector<int>ls;
	map<int , int>mpp;
	int mini =(int)n/3 + 1;
	for(int i=0 ; i<n ; i++){
		mpp[v[i]]++;
		if(mpp[v[i]] == mini){
			ls.push_back(v[i]);
		}
		if(ls.size() == 2) break;
	}
	// sort(ls.begin() , ls.end());
	return ls;
}
int main(){
    vector<int> a = {2,2,1,2,1,1,1,2,3,4,5}; 
    vector<int>result = majorityElement(a);
    cout<<"Majority n/3 ele is"<<endl;

    for(auto it : result ){
        cout<< it<<" ";
    }  
}