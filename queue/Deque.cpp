#include<bits/stdc++.h>
using namespace std;

class Deque
{
public:
    int *arr;
    int front,rear,size;
    // Initialize your data structure.
    Deque(int n)
    {
        size = n;
        arr = new int[size];
        front = rear = -1;
    }

    bool pushFront(int x)
    {
        if( isFull() ){
            return false;
        }else if( isEmpty() ){
            front = rear = 0;
        }else if(front == 0){
            front = size-1;
        }else{
            front--;
        }
        arr[front] = x;
        return true;
    }

    bool pushRear(int x)
    {
        if(isFull()){
            return false;
        }else if(isEmpty()){
            front = rear = 0;
        }else if(rear == (size-1) && front != 0){
            rear = 0;
        }else{
            rear++;
        }

        arr[rear] = x;
        return true;

    }

    int popFront()
    {
        if(front == -1){
            return -1;
        }

        int ans = arr[front];
        arr[front] = -1;

        if(front == rear ){
            front = rear = -1;
        }else if(front == size-1){
            front = 0;
        }else{
            front ++;
        }

        return ans;
    }

    // Pops an element from the back of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popRear()
    {
        if(rear == -1){
            return -1;
        }

        int ans = arr[rear];
        arr[rear] = -1;

        if(front == rear ){
            front = rear = -1;
        }else if(rear == 0){
            rear = size - 1 ;
        }else{
            rear--;
        }
        return ans;
    }

    int getFront()
    {
        if(isEmpty())
            return -1;
        else
            return arr[front];
    }

    // Returns the last element of the deque. If the deque is empty, it returns -1.
    int getRear()
    {
        if(isEmpty())
            return -1;
        else
            return arr[rear];
    }

    // Returns true if the deque is empty. Otherwise returns false.
    bool isEmpty()
    {
        if(front == -1){
            return true;
        }else{
            return false;
        }
    }

    // Returns true if the deque is full. Otherwise returns false.
    bool isFull()
    {
        if((front == 0 && rear == size -1 ) || (front != 0 &&rear == (front-1)%(size-1) ) ){
            return true;
        }else{
            return false;
        }
    }
};


int main(){

	deque<int> d;

	d.push_front(10);
	d.push_back(15);

	cout<<d.front()<<endl;
	cout<<d.back()<<endl;

	d.pop_front();

	cout<<d.front()<<endl;
	cout<<d.back()<<endl;

	// d.pop_front();

	if(d.empty())
		cout<<"deque is empty"<<endl;
	else
		cout<<"deque is not empty"<<endl;

	return 0;
}