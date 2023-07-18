#include<iostream>
using namespace std;

class Stack{

public:
	int *arr;
	int size;
	int top;

	Stack(int size){
		this -> size = size;
		arr = new int[size];
		top = -1;
	}

	void push(int val){
		if(size - top > 1){
			top++;
			arr[top] = val;
		}else{
			cout<<"stack overflow"<<endl;
		}
	}

	void pop(){
		if(top>=0){
			top--;
		}else{
			cout<<"stack underflow"<<endl;
		}
	}

	int peek(){
		if(top >= 0 ){
			return arr[top];
		}else{
			cout<<"stack is empty"<<endl;
			return -1;
		}
	}


	bool empty(){
		if(top == -1){
			return true;
		}else
			return false;
	}


};


int main(){

	Stack s(5);

	s.push(2);
	s.push(3);

	s.pop();



	cout<<"print top ele: "<<s.peek()<<endl;
	

	cout<<"is empty: "<<s.empty()<<endl;

	s.pop();
	cout<<"is empty: "<<s.empty()<<endl;

	return 0;
}