#include<bits/stdc++.h>
using namespace std;


void printPermutations(int ind,vector<vector<int>> &ans,vector<int> &arr){

	if(ind == arr.size()){
		ans.push_back(arr);
		return;
	}

	for(int i = ind; i < arr.size();i++){
		
		swap(arr[ind],arr[i]);

		printPermutations(ind + 1,ans,arr);
		
		swap(arr[ind],arr[i]);
	}

}


int main(){

	vector<int> arr = {1,2,3};
	vector<vector<int>> ans;


	printPermutations(0,ans,arr);

	for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++)
            cout << ans[i][j] << " ";
        cout << endl;
    }

	return 0;
}