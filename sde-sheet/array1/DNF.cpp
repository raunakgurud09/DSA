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


void sort012Better(int *arr, int n)
{
   //   Write your code here
	int store[3] = {0};

	for(int i=0 ; i<n ; i++){
		if(arr[i] == 0){
			store[0]++;
		}else if(arr[i] == 1){
			store[1]++;
		}else{
			store[2]++;
		}
	}

	for(int i=0 ; i<store[0] ; i++){arr[i] = 0;};

	for(int i=store[0] ; i<store[0]+store[1] ; i++){arr[i] = 1;};

	for(int i=store[0]+store[1] ; i<n ; i++){arr[i] = 2;};


}


void DNF(int *arr, int n)
{

	int low=0,mid = 0;
	int high = n-1;


	while(mid <= high){

		if(arr[mid] == 0){
			swap(arr[low],arr[mid]);
			low++;
			mid++;
		}else if(arr[mid] == 1){
			mid++;
		}else{
			swap(arr[mid],arr[high]);
			high--;
		}


	}

}

int main(){

	int n;
	cin>>n;
	int arr[n];

	for(int i=0 ; i<n ;i++){
		int val;
		cin>>val;
		arr[i] = val;
	}



	DNF(arr,n);

	printArr(arr,n);


	return 0;
}