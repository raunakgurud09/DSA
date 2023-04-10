#include<bits/stdc++.h>
using namespace std;

void printV(vector<int> &v){
	for(auto it : v){
		cout<<it<<" ";
	}
	cout<<endl;
}

void findCombinations(int ind,vector<vector<int>> &ans,vector<int> &arr,vector<int> &ds,int target){

	if(ind == arr.size()){
		if(target == 0){
			ans.push_back(ds);
			printV(ds);
		}
		return;
	}

	if(arr[ind] <= target){
		ds.push_back(arr[ind]);
		findCombinations(ind,ans,arr,ds,target - arr[ind]);
		ds.pop_back();
	}
	findCombinations(ind+1,ans,arr,ds,target);

}


int main(){

	vector<int> v = {2,3,1,5,6};
	int target = 7;
	vector<vector<int>> ans;
	vector<int> ds;
	
	findCombinations(0,ans,v,ds,target);

	return 0;
}