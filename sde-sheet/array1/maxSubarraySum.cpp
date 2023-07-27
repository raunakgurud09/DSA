#include<bits/stdc++.h>
using namespace std;

long long maxSubarraySum(int arr[], int n)
{
	int maximum = 0,sum = 0;
   
    for(int i=0 ; i<n ; i++){
    	
    	if(arr[i]+sum < 0){
    		sum = 0;
    	}else{
    		sum += arr[i];

    		maximum = max(maximum,sum);

    	}
    	
    }
    
	return maximum;

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
	int arr[n];

	for(int i=0 ; i<n ;i++){
		int val;
		cin>>val;
		arr[i] = val;
	}


	for(int i=0 ; i<n ;i++){
		cout<<arr[i]<<' ';
	}

	cout<<endl;

	cout<<maxSubarraySum(arr,n);


	return 0;
} 