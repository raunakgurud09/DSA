#include<bits/stdc++.h>
using namespace std;

void printV(vector<int> v){
	for(auto it:v){
		cout<<it<<" ";
	}
	cout<<endl;
}

void findCombinations(int ind,int target,vector<vector<int>> &ans,vector<int> &ds,vector<int> &arr){

	if(target == 0){
		ans.push_back(ds);
		printV(ds);
		return;
	}

	for(int i =ind;i<arr.size();i++){
		if(i>ind && arr[i] == arr[i-1]) continue;
		if(arr[i] > target) break;
		ds.push_back(arr[i]);
		findCombinations(i+1,target-arr[i],ans,ds,arr);
		ds.pop_back();

	}

}

int main(){
	vector<int> v = {2,3,1,4,7};
	vector<vector<int>> ans;
	vector<int> ds;
	int target = 7;


	findCombinations(0,target,ans,ds,v);
	return 0;
}