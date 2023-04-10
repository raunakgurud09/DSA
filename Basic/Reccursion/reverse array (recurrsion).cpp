#include <bits/stdc++.h>
using namespace std;


void swap(int &a,int &b){

	int temp = a;
	a =b;
	b= temp;
}

void printArr(int arr[],int n){
	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void reverseArr(int i,int arr[],int n){

	if(i >= n/2) return;

	swap(arr[i],arr[n-i-1]);
	reverseArr(i+1,arr,n);

}


int main()
{
	int n;
	cin >>n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		int ele;
		cin>>ele;
		arr[i] = ele;

	}

	

	printArr(arr,n);
	reverseArr(0,arr,n);
	printArr(arr,n);

    return 0;
}