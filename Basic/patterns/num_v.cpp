#include<iostream>
using namespace std;


// 1          1
// 12        21
// 123      321
// 1234    4321
// 12345  54321
// 123456654321

int main(){
	int t;
	cin >>t ;
	
	while(t--){
		int n;
		cin>> n;
		// upper triangle
		for(int i = 1 ; i <= n;i++){
			for(int j = 0 ;j < i ;j++){
				cout<<j+1;
			}
			for(int j = 0 ; j < (2*n) - (2*i) ;j++){
				cout<<" ";
			}
			for(int j = i ;j >= 1;j--){
				cout<<j;
			}
			cout<<endl;
		}
		cout<<endl;
	}

	return 0;
}

// [n,x]