#include<bits/stdc++.h>
using namespace std;

void removeLastSetBit(int &n){
	n = n & (n-1);
}

bool is2n(int n){
	if(n & (n-1) ){
		return false;
	}else{
		return true;
	}
}

int countBits(int n){
	int cnt = 0;
	while(n!=0){
		if(n&1 == 1){
			cnt++;
		}
		n = (n>>1);
	}
	return cnt;
}

int main(){

	int a = 7;

	removeLastSetBit(a);
	cout<<a<<endl;

	cout<<is2n(a)<<endl;
	cout<<is2n(8)<<endl;

	cout<<countBits(12)<<endl;

	return 0;
}