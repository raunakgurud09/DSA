#include<iostream>
using namespace std;

// A 
// A B 
// A B C 
// A B C D 
// A B C D E 

 


int main(){
	int t;
	cin >>t ;
	
	while(t--){
		int n;
		cin>> n;
		
		// upper triangle
		for(int i = 0 ;i < n;i++){
			char c = 'A';
			for(int j = 0 ;j < i+1;j++){
				cout<<c<<" ";
				c++;
			}
			cout<<endl;
		}
		cout<<endl;
	}

	return 0;
}

// [n,x]