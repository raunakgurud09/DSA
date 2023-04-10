#include<bits/stdc++.h>
using namespace std;

void printV(vector<int> &v){
	for(auto it:v){
		cout<<it<<" ";
	}
	cout<<endl;
}

void printPermutations(vector<vector<int>> &ans,vector<int> &ds,vector<int> &arr,int freq[]){

	if(ds.size() == arr.size()){
		ans.push_back(ds);
		return;
	}

	for(int i = 0; i < arr.size();i++){
		if(!freq[i]){
			ds.push_back(arr[i]);
			freq[i] = 1;
			printPermutations(ans,ds,arr,freq);
			freq[i] = 0;
			ds.pop_back();
		}

	}


}


int main(){

	vector<int> arr = {1,2,3};
	vector<vector<int>> ans;
	vector<int> ds;

	int freq[arr.size()] = {0};

	printPermutations(ans,ds,arr,freq);

	for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++)
            cout << ans[i][j] << " ";
        cout << endl;
    }

	return 0;
}