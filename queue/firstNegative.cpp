#include<bits/stdc++.h>
using namespace std;

vector<int> firstNegative(vector<int> arr, int n, int k) {
	
	deque<int> dq;
	vector<int> ans;

	//for first k size window
	for(int i=0; i<k ;i++){
		if(arr[i]<0){
			dq.push_back(i);
		}
	}

	if(dq.size() > 0){
		ans.push_back(arr[dq.front()]);
	}else{
		ans.push_back(0);
	}

	for(int i=k ; i<n ; i++){
		//removal
		if(!dq.empty() && i-dq.front() >= k){
			dq.pop_front();
		}

		if(arr[i]<0){
			dq.push_back(i);
		}

		if(dq.size() > 0){
			ans.push_back(arr[dq.front()]);
		}else{
			ans.push_back(0);
		}
	}

	return ans;
}

int main(){


	return 0;
}