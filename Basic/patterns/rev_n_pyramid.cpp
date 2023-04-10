#include<iostream>
using namespace std;


// *********
//  ******* 
//   *****  
//    ***   
//     *    

// n = 5 
// [0,9,0] \ i = 0 (2n - (2i+1)) 
// [1,7,1] \ i = 1
// [2,5,2]


int main(){
	int t;
	cin >>t ;
	
	while(t--){
		int n;
		cin>> n;
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

