#include<bits/stdc++.h>
using namespace std;

vector<int> nextSmallerElement(vector<int> &arr,int n){

  stack<int> s;
  s.push(-1);

  vector<int> ans(n);
  
  for(int i= n-1;i >=0 ;i--){

    int curr = arr[i];
    while(s.top() != -1 && arr[s.top()] >= curr){s.pop();}

    ans[i] = s.top();
    s.push(i);
  }
  return ans;
   
}

vector<int> prevSmallerElement(vector<int> &arr,int n){

  stack<int> s;
  s.push(-1);

  vector<int> ans(n);
  
  for(int i = 0 ;i < n ;i++){

    int curr = arr[i];
    while(s.top() != -1 && arr[s.top()] >= curr){s.pop();}


    ans[i] = s.top();
    s.push(i);
  }

  return ans;
}
 
 
int largestRectangle(vector < int > & heights) {
   // Write your code here.

  int n = heights.size();

  vector<int> prev(n);
  prev = prevSmallerElement(heights,n);
  
  	
  vector<int> next(n);		
  next = nextSmallerElement(heights,n);

  int area = INT_MIN;
  for(int i =0 ;i < n;i++){

    int l = heights[i];
    
    if(next[i] == -1 ){
      next[i] = n;
    }


    int b = next[i] - prev[i] -1;


    int newArea = l*b;

    area = max(area,newArea);
  }

  return area;
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


	int ans = largestRectangle(v);

	cout<<ans<<endl;
	// for(int i =0 ;i <n;i++){
	// 	cout<<v[i]<<endl;
	// }
	


	return 0;

}