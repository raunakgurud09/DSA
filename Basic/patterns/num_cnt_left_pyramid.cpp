#include<iostream>
using namespace std;


// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 


int main(){
	int t;
	cin >>t ;
	
	while(t--){
		int n;
		cin>> n;
		int cnt = 1;
		// upper triangle
		for(int i = 0 ;i < n;i++){
			for(int j = 0 ;j < i+1;j++){
				cout<<cnt<<" ";
				cnt++;
			}
			cout<<endl;
		}
		cout<<endl;
	}

	return 0;
}

// [n,x]