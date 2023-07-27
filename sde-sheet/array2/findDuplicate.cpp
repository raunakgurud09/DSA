#include<bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> &arr, int n){
	
	int dp[20] = {0};
	int ans = -1;

	for(int i=0 ; i<n ;i++){
		dp[arr[i]]++;
		if(dp[arr[i]] > 1){
			ans = arr[i];
			break;
		}
	}
	return ans;
}

int main(){
	return 0;
}