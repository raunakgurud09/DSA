#include <bits/stdc++.h>
using namespace std;


void printN(int cnt ,int n){
	if(cnt > n || cnt <0) return;
	cout<<cnt<<endl;
	printN(--cnt,n);
	
}

int main()
{
	int n;
	cin>>n;
	printN(n,n);

    return 0;
}