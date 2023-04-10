#include<iostream>
using namespace std;

//     *    
//    ***   
//   *****  
//  ******* 
// *********
// *********
//  ******* 
//   *****  
//    ***   
//     *    




int main(){
	int t;
	cin >>t ;
	
	while(t--){
		int n;
		cin>> n;
		for(int i = 0 ;i < n;i++){
			for(int j = 0 ;j < n - i -1;j++){
				// n - i space
				cout<<" ";
			}
			for(int j = 0 ;j < (i *2) +1;j++){
				cout<<"*";
			}
			for(int j = 0 ; j < n - i -1;j++){
				cout<<" ";
			}
			cout<<endl;
		}
		for(int i = 0 ;i < n;i++){
			
			for(int j = 0 ;j < i;j++){
				// n - i space
				cout<<" ";
			}

			for(int j = 0 ;j < 2*n - (2*i +1) ;j++){
				cout<<"*";
			}

			for(int j = 0 ;j < i;j++){
				// n - i space
				cout<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
	}

	return 0;
}