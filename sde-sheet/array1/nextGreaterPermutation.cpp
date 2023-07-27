#include<bits/stdc++.h>
using namespace std;

vector<int> nextGreaterPermutation(vector<int> &A) {
    // Write your code here.
   
	int index = -1;
	int n = A.size();

	for(int i=n-2 ; i>=0 ; i--){
		if(A[i] < A[i+1]){
			index = i;
			break;
		}
	}

	if(index == -1){
		reverse(A.begin(),A.end());
		return A;
	}


	for(int i=n-1 ; i>=0 ; i--){
		if(A[index] < A[i]){
			swap(A[index],A[i]);
			break;
		}
	}

	reverse(A.begin()+index+1 , A.end());
	
	return A;
}


void printVector(vector<int> v){

	for(int i=0 ; i<v.size() ; i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
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

	vector<int> ans;
	ans = nextGreaterPermutation(v);


	printVector(ans);


	return 0;
}