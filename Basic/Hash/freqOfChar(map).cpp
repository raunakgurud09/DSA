#include<bits/stdc++.h>
using namespace std;

int main(){

	string s;
	cin>>s;

	//precompute
	map<char,int> hash;
	for (int i = 0; i < s.size(); i++)
	{
		hash[s[i]] += 1;
	}

	for(auto it:hash){
		cout<<it.first<<"->"<<it.second<<endl;
	}

	int n;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		char x;
		cin>>x;
		cout<<hash[x]<<endl;
	}




	return 0;
}