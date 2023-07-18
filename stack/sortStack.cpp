#include<bits/stdc++.h>
using namespace std;


// int t = st.size();

// 	for(int i =0 ;i < t;i++){
// 		cout<<st.top()<<endl;
// 		st.pop();
// 	}
	

void insertSorted(stack<int>  &stack,int num){

	if(stack.empty() || (!stack.empty() && stack.top() < num) ){
		stack.push(num);
		return;
	}

	int n = stack.top();
	stack.pop();

	insertSorted(stack,num);

	stack.push(n);


}

void sortStack(stack<int> stack)
{
	// Write your code here
	if(stack.empty()){
		return;
	}

	int num = stack.top();
	stack.pop();

	sortStack(stack);

	insertSorted(stack,num);
}

int main(){
	
	stack<int> st;

	int t;
	cin >> t;

	for(int i = 0 ; i < t; i++){
		int val;
		cin>> val;
		st.push(val);
	}


	sortStack(st);


	

	return 0;

}