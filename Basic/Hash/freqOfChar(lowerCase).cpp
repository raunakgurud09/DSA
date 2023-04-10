#include<bits/stdc++.h>
using namespace std;

int main(){

	string s;
	cin>>s;

	//precompute
	int hash[26] = {0};
	for (int i = 0; i < s.size(); i++)
	{
		hash[s[i] - 'a'] += 1;
	}

	int n;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		char x;
		cin>>x;
		cout<<hash[x-'a']<<endl;
	}




	return 0;
}