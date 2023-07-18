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

void deleteNode(Node* tail,int ele){

	if(tail == NULL){
		cout<<"Tail is empty nothing to delete"<<endl;
		return;
	}


	Node* prev = tail;
	Node* curr = tail->next;

	// assuming the ele exist always
	while(curr->data != ele){
		prev = curr;
		curr = curr->next;
	}

	prev->next = curr->next;
	curr->next = NULL;

	delete curr;
}




int main(){


	Node* tail = NULL;

	insertNode(tail,5,3);
	printLl(tail);

	insertNode(tail,3,5);
	insertNode(tail,5,9);
	printLl(tail);


	insertNode(tail,5,6);
	printLl(tail);


	// deleteNode(tail,3);
	// printLl(tail);

	cout<<tail->data<<endl;

	return 0;
}