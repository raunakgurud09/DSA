#include<iostream>
using namespace std;


// A 
// B B 
// C C C 
// D D D D 
// E E E E E 




int main(){
	int t;
	cin >>t ;
	
	while(t--){
		int n;
		cin>> n;
	
		for(int i = 0 ;i < n;i++){
			char c = 'A' + i;
			for(int j = 0 ;j < i+1;j++){
				cout<<c<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
	}

	return 0;
}

// [n,x]