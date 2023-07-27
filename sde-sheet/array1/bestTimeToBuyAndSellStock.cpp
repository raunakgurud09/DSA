#include<bits/stdc++.h>
using namespace std;



void printVector(vector<int> v){

	for(int i=0 ; i<v.size() ; i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}

void printArr(int *arr,int n){

	for(int i=0 ; i<n ;i++){
		cout<<arr[i]<<' ';
	}

	cout<<endl;
}


int bestTimeToBuyAndSellStock(vector<int>&prices) {
    	
    int profit = 0,mini = prices[0];

    for (int i = 0; i < prices.size(); ++i){
    	int cost = prices[i] - mini;

    	profit = max(profit,cost);

    	mini = min(mini,prices[i]);

    }


    return profit;
}

int main(){

	int n;
	cin>>n;
	int arr[n];
	vector<int> v;

	for(int i=0 ; i<n ;i++){
		int val;
		cin>>val;
		v.push_back(val);
	}



	

	printVector(v);

	cout<<bestTimeToBuyAndSellStock(v);




	return 0;
}