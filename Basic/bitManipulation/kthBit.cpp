#include<bits/stdc++.h>
using namespace std;

void isKthBitSet(int n,int k){
	if((1<<k) & n ){
		cout<<"SET"<<endl;
	}else{
		cout<<"NOT SET"<<endl;
	}
}

int kBitVal(int n,int k){
	if((n>>k)&1){
		return 1;
	}else{
		return 0;
	}
}

int main(){

	cout<<((4>>0)&1)<<endl;

	isKthBitSet(4,2);
	cout<<kBitVal(6,1)<<endl;

	return 0;
}