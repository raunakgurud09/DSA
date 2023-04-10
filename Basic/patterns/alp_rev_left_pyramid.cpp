#include<iostream>
using namespace std;


// ABCDE
// ABCD
// ABC
// AB
// A


int main(){
	int t;
	cin >>t ;
	
	while(t--){
		int n;
		cin>> n;
		
		// upper triangle
		for(int i = 0 ;i < n;i++){
			char c = 'A';
			for(int j = 0 ;j < n - i;j++){
				cout<<c;
				c++;
			}
			cout<<endl;
		}
		cout<<endl;
	}

	return 0;
}

// [n,x]