#include <bits/stdc++.h>
using namespace std;

void setBit(int &n,int k){
	n = (n | (1<<k));
}

void notSetBit(int &n,int k){
	n = (n & (~(1<<k)));
}


int main(){

	int a = 20;

	setBit(a,0);
	cout<<a<<endl;

	notSetBit(a,0);
	cout<<a<<endl;

	return 0;
}