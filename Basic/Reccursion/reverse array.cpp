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

void reverseArr(int arr[],int n){

	int i = 0;
	int r = n -1;

	while(i < r){
		swap(arr[i],arr[r]);
		i++;
		r--;
	}

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
	reverseArr(arr,n);
	printArr(arr,n);

    return 0;
}