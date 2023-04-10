#include<iostream>
using namespace std;


 //     A     
 //    ABA    
 //   ABCBA   
 //  ABCDCBA  
 // ABCDEDCBA 


int main(){
	int t;
	cin >>t ;
	
	while(t--){
		int n;
		cin>> n;
	
		for(int i = 0 ;i < n;i++){
			
			for(int j = 0 ;j < n - i;j++){
				// n - i space
				cout<<" ";
			}
			char c = 'A';
			int breakPoint = (2*i+1)/2;
			for(int j = 1 ;j <= (i *2) +1;j++){
				cout<<c;
				if(j <= breakPoint) c++;
				else c--;
			}
			for(int j = 0 ; j < n - i;j++){
				cout<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
	}

	return 0;
}

// [n,x]