#include <bits/stdc++.h>
using namespace std;


void printN(int cnt ,int n){
	if(cnt > n) return;
	cout<<"count "<<cnt<<endl;
	printN(++cnt,n);

	
}

int main()
{
	int n;
	cin>>n;
	printN(1,n);

    return 0;
}