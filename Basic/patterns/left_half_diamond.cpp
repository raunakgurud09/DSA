#include<iostream>
using namespace std;

// *
// **
// ***
// ****
// *****
// *****
// ****
// ***
// **
// *



int main(){
	int t;
	cin >>t ;
	
	while(t--){
		int n;
		cin>> n;
		// upper triangle
		for(int i = 0 ;i < n;i++){
			for(int j = 0 ;j < i+1;j++){
				cout<<"*";
			}
			cout<<endl;
		}
		// lower triangle
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n- i; ++j)
			{
				cout<<"*";
			}
			cout<<endl;
		}
		cout<<endl;
	}

	return 0;
}