#include<bits/stdc++.h>
using namespace std;

int XOR(int n){
	if(n%4 == 0){return n;}
	else if(n%4 == 1){return 1;}
	else if(n%4 == 2){return n+1;}
	else if(n%4 == 3){return 0;}

	return -1;
}

int XORn(int n){
	if(n ==0 ){
		return 0;
	}

	int uni=0;
	for(int i=1 ;i<=n ;i++){
		uni = uni^i;
	}
	return uni;
}

int main(){


	cout<<(1^2^3)<<endl;
	cout<<XOR(5)<<endl;
	cout<<XORn(5)<<endl;

	
	return 0;
}