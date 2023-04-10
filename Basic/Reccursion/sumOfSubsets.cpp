#include<bits/stdc++.h>
using namespace std;

void printV(vector<int> v){
	for(auto it:v){
		cout<<it<<" ";
	}
	cout<<endl;
}

void findCombinations(int ind,int sum,vector<int> &ds,vector<int> &arr){
	if(ind == arr.size()){
		ds.push_back(sum);
		return;
	}

	findCombinations(ind +1 ,sum + arr[ind],ds,arr);

	findCombinations(ind+1,sum,ds,arr);


}

int main(){


	vector<int> v = {3,1,2};
	vector<int> ds;
	findCombinations(0,0,ds,v);
	sort(ds.begin(),ds.end());
	printV(ds);

	return 0;
}