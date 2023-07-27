#include<bits/stdc++.h>
using namespace std;

void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a, vector<long long> &b){
	
	int n = a.size();
	int m = b.size();
	int ind = 0;
	long long arr[n+m];
	int left=0,right = 0;

	while(left < n && right < m){
		if(a[left] <= b[right]){
			arr[ind] = a[left];
			ind++,left++;
		}else{
			arr[ind] = b[right];
			ind++,right++;
		}
	}

	while(left < n){
		arr[ind++] = a[left++];
	}

	
	while(right < m){
		arr[ind++] = b[right++];
	}

	for(int i=0 ; i<n+m ;i++){
		if(i<n){
			a[i] = arr[i];
		}else{
			b[i-n] = arr[i];
		}
	}

}

int main(){
	return 0;
}