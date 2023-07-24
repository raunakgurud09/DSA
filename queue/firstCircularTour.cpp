#include<bits/stdc++.h>
using namespace std;

int firstCircularTour(vector<int>& petrol, vector<int>& distance, int N)
{
	// write your code here
	int balance = 0;
	int start = 0;
	int deficit = 0;

	for(int i=0 ; i<N ; i++){
		balance += petrol[i] - distance[i];
		if(balance<0){
			deficit += balance;
			start = i+1;
			balance = 0;
		}
	}

	if(deficit + balance >= 0){
		return start;
	}else{
		return -1;
	}



}

int main(){


	return 0;
}