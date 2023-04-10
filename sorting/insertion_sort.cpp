#include<bits/stdc++.h>
using namespace std;


void swap(int &a,int &b){
	int temp = a;
	a = b;
	b= temp;
}


void insertion_sort_rec(int arr[], int i, int n) {

    // Base Case: i == n.
    if (i == n) return;

    int j = i;
    while (j > 0 && arr[j - 1] > arr[j]) {
        int temp = arr[j - 1];
        arr[j - 1] = arr[j];
        arr[j] = temp;
        j--;
    }

    insertion_sort(arr, i + 1, n);
}

int main(){


	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}


	for(int i = 0 ;i < n;i++){
		int j = i;

		while(j > 0 && arr[j-1] > arr[j]){
			swap(arr[j-1],arr[j]);
			j--;
		}


	}

	for (int i = 0; i < n; i++)
	{
		cout<<arr[i]<<" ";
	}


	return 0;
}