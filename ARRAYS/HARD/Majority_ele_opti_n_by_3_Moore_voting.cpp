#include<bits/stdc++.h>
using namespace std;
vector<int> majorityElement(vector<int> v) {
	int cnt1 = 0 , cnt2 = 0;
	int ele1 , ele2;
	for(int i = 0 ; i<v.size() ; i++){
		if(cnt1 == 0 && v[i] != ele2){
			cnt1 = 1;
			ele1 = v[i];
		}
		else if(cnt2 == 0 && v[i] != ele1){
			cnt2 = 1;
			ele2 = v[i];
		}
		else if(ele1 == v[i]) cnt1++;
		else if (ele2 == v[i]) cnt2++;
		else{
			cnt1--;
			cnt2--;
		}
	}
	// manual check is important
	vector<int>ls;
	int CNT1 = 0 , CNT2 = 0;
	for(int i = 0;i<v.size() ; i++){
		if(v[i] == ele1){
			CNT1++;
		}
		if(v[i] == ele2){
			CNT2++;
		}
	}
	if(CNT1 > v.size()/3) ls.push_back(ele1);
	if(CNT2 > v.size()/3) ls.push_back(ele2);
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