#include<bits/stdc++.h>
using namespace std;


vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    // Write your code here.
    stack<int> s;
    s.push(-1);

    vector<int> ans(n);

    for(int i = n-1; i >= 0;i--){
    	// cout<<arr[i]<<endl;

        int curr = arr[i];
        while(s.top() >= curr){ 
            s.pop();
        }

        ans[i] = s.top();
        s.push(curr);

    }

    return ans;


}


int main(){
	
	int n;
	cin>>n;

	vector<int> v;

	for(int i = 0; i< n;i++){
		int num;
		cin>>num;

		v.push_back(num);
	}


	v = nextSmallerElement(v,n);
	
	for(int i =0 ;i <n;i++){
		cout<<v[i]<<endl;
	}
	


	return 0;

}