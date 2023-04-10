#include<bits/stdc++.h>
using namespace std;


void swap(int &a,int &b){
	int temp = a;
	a = b;
	b= temp;
}


void bubble_sort_rec(int arr[], int n) {
    // Base Case: range == 1.
    if (n == 1) return;

    for (int j = 0; j <= n - 2; j++) {
        if (arr[j] > arr[j + 1]) {
            int temp = arr[j + 1];
            arr[j + 1] = arr[j];
            arr[j] = temp;
        }
    }

    //Range reduced after recursion:
    bubble_sort(arr, n - 1);
}

int main(){


	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}


	
	for(int i = n-1;i >=1;i--){
	 	int didSwap = 0;
		for(int j = 0;j<i-1;j++){
			if(arr[j] > arr[j+1]) swap(arr[j],arr[j+1]);
			didSwap = 1;
		}
		if(didSwap == 0) break;
	}

	for (int i = 0; i < n; i++)
	{
		cout<<arr[i]<<" ";
	}


	return 0;
}