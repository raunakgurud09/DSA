#include<iostream>
using namespace std;

// *****
// *   *
// *   *
// *   *
// *****



int main(){
	int t;
	cin >>t ;
	
	while(t--){
		int n;
		cin>> n;
	
		for(int i = 0 ;i < n ;i++){
			
			for(int j = 0 ;j < n;j++){
				// n - i space
				if(i == 0) cout<<"*";
				else if(i == n-1) cout<<"*";
				else{
					if(j == 0) cout<<"*";
					else if(j == n-1) cout<<"*";
					else cout<<" ";
				}
			}
			cout<<endl;
		}
		
		cout<<endl;
	}

	return 0;
}

// [n,x]