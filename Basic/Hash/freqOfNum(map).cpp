#include<bits/stdc++.h>
using namespace std;

int main(){

	int s;
	cin>>s;
	int arr[s];
	

	//precompute
	// map<int,int> hash;
	// unordered_map<int,int> hash;
	for (int i = 0; i < s; i++)
	{	
		cin >> arr[i];
		hash[arr[i]] += 1;
	}


	for(auto it:hash){
		cout<<it.first<<"->"<<it.second<<endl;
	}


	int n;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin>>x;
		cout<<hash[x]<<endl;
	}




	return 0;
}