#include<bits/stdc++.h> 
using namespace std;

// best		o(nlogn)
// avg 		o(nlogn)
// worst 	o(nlogn)


void merge(int arr[],int low,int mid,int high){

	int i = low;
	int j = mid+1;


	vector<int> temp;

	while(i <= mid && j <= high){
		if(arr[i] < arr[j]){
			temp.push_back(arr[i]);
			i++;
		}else {
			temp.push_back(arr[j]);
			j++;
		}
	}

	while(i <= mid){
		temp.push_back(arr[i]);
		i++;
	}

	while(j <= high){
		temp.push_back(arr[j]);
		j++;
	}

	for(int i = low;i <= high;i++){
		arr[i] = temp[i - low];
	}

}


void mergeSort(int arr[],int low,int high){
	if(low >= high) return;

	int mid = (low+high)/2;
	mergeSort(arr,low,mid);
	mergeSort(arr,mid+1,high);

	merge(arr,low,mid,high);

}

int main(){
	
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}

	mergeSort(arr,0,n);

	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" ";
	}


	return 0;
}

