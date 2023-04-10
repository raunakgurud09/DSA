#include<iostream>
using namespace std;

// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *



int main(){
	int t;
	cin >>t ;
	
	while(t--){
		int n;
		cin>> n;
	
		for(int i = 0 ;i < n -1;i++){
			
			for(int j = 0 ;j <= i;j++){
				// n - i space
				cout<<"*";
			}
			
			for(int j = 2*(n - i) -1 ; j > 1  ;j--){
				cout<<" ";
			}

			for(int j = 0 ; j <= i;j++){
				cout<<"*";
			}
			cout<<endl;
		}

		for(int i = 0 ;i < n;i++){
			
			for(int j = 0 ;j < n-i ;j++){
				// n - i space
				cout<<"*";
			}

			
			for(int j = 0 ; j < 2*i ;j++){
				cout<<" ";
			}

			for(int j = 0 ; j < n -i;j++){
				cout<<"*";
			}
			cout<<endl;
		}

		
		cout<<endl;
	}

	return 0;
}

// [n,x]