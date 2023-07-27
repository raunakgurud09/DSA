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



pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	
	int dp[n+1] = {0};
    pair<int,int> ans;

    for(int i=0 ; i<n ; i++){
        dp[arr[i]]++;
    }

    for(int i=1; i<n+2 ;i++){
    	// for the missing element
        if(dp[i] == 0){
            ans.first = i;
        }

        if(dp[i] == 2){
            ans.second = i;
        }
    }
    return ans;
}

int main(){

	int n;
	cin>>n;
	vector<int> v;

	for(int i=0 ; i<n ;i++){
		int val;
		cin>>val;
		v.push_back(val);
	}

	// printVector(v);
	pair<int,int> p = missingAndRepeating(v,n);


	// try with xor
	cout<<p.first<<" "<<p.second<<endl;

	return 0;
}