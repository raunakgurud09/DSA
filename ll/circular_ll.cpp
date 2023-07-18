#include<iostream>
using namespace std;

class Node{
public:
	int data;
	Node* next;

	Node(int data){
		this->data = data;
		this->next = NULL;
	}

	~Node(){
		int value = this->data;
		if(next !=NULL){
			delete next;
			next = NULL;
		}
		cout<<"Memory free for node with data : "<<value<<endl;

	}
};

void printLl(Node* tail){

	Node* temp = tail;

	do{
		cout<<tail->data<<"->";
		tail = tail->next;
	}while(tail != temp);

	cout<<"NULL"<<endl;

}

void insertNode(Node* &tail,int ele,int data){

	// empty list where tail is null
	if(tail == NULL){
		Node* temp = new Node(data);

		tail = temp;
		temp->next = temp;

	}else{
		// only one node = ele	
		Node* curr = tail;

		while(curr->data != ele){
			curr = curr->next;
		}

		Node* temp = new Node(data);

		temp->next = curr->next;
		curr->next = temp;


	}

}




int main(){


	Node* tail = NULL;

	insertNode(tail,5,3);
	printLl(tail);

	insertNode(tail,3,5);
	insertNode(tail,5,9);
	printLl(tail);

	insertNode(tail,9,3);
	insertNode(tail,3,10);
	printLl(tail);

	insertNode(tail,5,6);
	printLl(tail);

	return 0;
}