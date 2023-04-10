#include<iostream>
using namespace std;

          
// 1 
// 2 2 
// 3 3 3 
// 4 4 4 4 
// 5 5 5 5 5 



int main(){
	int t;
	cin >>t ;
	
	while(t--){
		int n;
		cin>> n;
		for(int i = 0 ;i <= n;i++){
			for(int j = 1 ;j <= i;j++){
				cout<<i<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
	}

	return 0;
}