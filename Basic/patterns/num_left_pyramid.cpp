#include<iostream>
using namespace std;

// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5 

int main(){
	int t;
	cin >>t ;
	
	while(t--){
		int n;
		cin>> n;
		// upper triangle
		for(int i = 0 ; i <  n;i++){
			for(int j = 0 ;j < i +1 ;j++){
				cout<<j+1<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
	}

	return 0;
}