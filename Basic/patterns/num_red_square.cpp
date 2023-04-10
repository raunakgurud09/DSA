#include<iostream>
using namespace std;

// 4 4 4 4 4 4 4 
// 4 3 3 3 3 3 4 
// 4 3 2 2 2 3 4 
// 4 3 2 1 2 3 4 
// 4 3 2 2 2 3 4 
// 4 3 3 3 3 3 4 
// 4 4 4 4 4 4 4 



int main(){
	int t;
	cin >>t ;
	
	while(t--){
		int n;
		cin>> n;
	
		for(int i = 0 ;i < 2*n-1 ;i++){
			
			for(int j = 0 ;j < 2*n-1;j++){
				int top = i;
				int left = j;
				int right = (2*n)- 2 - j;
				int bottom = (2*n)- 2 -i;j;
				int minE = min(min(top,left),min(right,bottom));
				cout<<(n-minE)<<" ";
			}
			cout<<endl;
		}
		
		cout<<endl;
	}

	return 0;
}

// [n,x]