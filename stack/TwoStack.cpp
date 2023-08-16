#include<bits/stdc++.h>
using namespace std;

class Stack{

public:
	int *arr;
	int top1;
	int top2;
	int size;


	Stack(int size){
		this->size = size;
		arr = new int[size];
		top1 = -1;
		top2 = size;
	}


	void push1(int val){
		if(top2 - top1 > 1){
			top1++;
			arr[top1] = val;
		}else{
			cout<<"Stack overflow"<<endl;
		}
	}


	void push2(int val){
		if(top2 - top1 + 1){
			top2--;
			arr[top2] = val;
		}else{
			cout<<"Stack overflow"<<endl;
		}
	}



	int pop1(){
		if(top1 >= 0){
			int ans = arr[top1];
			top1--;
			return ans;
		}else {
			return -1;
		}
	}

	
	void pop2(){
		if(top2 < size){
			int ans = arr[top2];
			top2++;
			return ;
		}else return;
	}


};




int main(){
	

	return 0;

}