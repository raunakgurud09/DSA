#include<iostream>
using namespace std;

// 1 
// 0 1 
// 1 0 1 
// 0 1 0 1 
// 1 0 1 0 1 



int main(){
	int t;
	cin >>t ;
	
	while(t--){
		int n;
		cin>> n;
		// upper triangle
		for(int i = 0 ;i < n;i++){
			for(int j = 0 ;j < i + 1;j++){
				if((i + j)%2 == 0) cout<<"1 ";
				else cout<<"0 ";
				
			}
			cout<<endl;
		}
		cout<<endl;
	}

	return 0;
}