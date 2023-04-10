#include<bits/stdc++.h>
using namespace std;

void printV(vector<int> &v){
	for(auto it:v){
		cout<<it<<" ";
	}
	cout<<endl;
}

void printSubsets(int ind,vector<int> &ds,vector<vector<int>> &ans,int arr[],int n){


	ans.push_back(ds);
	for(int i = ind;i< n;i++){
		if(i != ind && arr[i] == arr[i - 1]) continue;
		ds.push_back(arr[ind]);
		printSubsets(ind +1,ds,ans,arr,n);
		ds.pop_back();
	
	}

}

int main(){

	int n = 6;
	int arr[] = {1,1,2,2,1,3};
	sort(arr,arr+n);
	vector<vector<int>> ans;
	// for(int i = 0;i<n;i++){
	// 	cout<<arr[i]<<" ";
	// }
	// cout<<endl<<"\n\n";
	vector<int> ds;

	printSubsets(0,ds,ans,arr,n);

	

	return 0;
}