#include<bits/stdc++.h> 
using namespace std;

// best		o(nlogn)
// avg 		o(nlogn)
// worst 	o(nlogn)


void swap(int &a,int &b){
	int temp = a;
	a = b;
	b = temp;
}

int  partition(int arr[],int low,int high){
	int pivot = arr[low];

	int i = low;
	int j = high;

	while(i<j){

		while(arr[i] <= pivot && i <= high -1){
			i++;
		}

		while(arr[j] > pivot && j >= low +1){
			j--;
		}

		if(i<j){
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[low],arr[j]);
	return j;

}


void quickSort(int arr[],int low,int high){
	if(low < high) {
	
		int part = partition(arr,low,high);
	
		quickSort(arr,low,part-1);
		quickSort(arr,part+1,high);
	}
}

int main(){
	
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}

	quickSort(arr,0,n);

	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" ";
	}


	return 0;
}

