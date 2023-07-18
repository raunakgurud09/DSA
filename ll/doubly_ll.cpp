#include <bits/stdc++.h>
using namespace std;

class Node{

public:
	int data;
	Node* next;
	Node* prev;


	Node(int data){
		this->data = data;
		this->next = NULL;
		this->prev = NULL;

	}

};

void printLl(Node* &head){
	Node* temp = head;

	while(temp != NULL){
		cout<<temp->data<<"->";
		temp = temp->next;
	}
	cout<<"NULL"<<endl;
}


int getLength(Node* head){
	
	int cnt = 0;
	Node* temp = head;
	while(temp !=NULL){
		cnt++;
		temp = temp->next;
	}

	return cnt;
}

void insertAtHead(Node* &head,int data){
	Node* temp = new Node(data);
	

	temp->next = head;
	head->prev = temp;

	head = temp;
}

void insertAtTail(Node* &tail,int data){
	Node* temp = new Node(data);

	tail->next = temp;
	temp->prev = tail;

	tail = temp;
}

void insertInPosition(Node* &head,Node* &tail,int data,int position){

	if(position == 1){
		insertAtHead(head,data);
		return;
	}

	Node* temp = head;

	int cnt = 1;
	while(cnt < position-1){
		temp = temp->next;
		cnt++;
	}

	if(temp->next == NULL){
		insertAtTail(tail,data);
		return;
	}

	Node* nodeToInsert = new Node(data);


	nodeToInsert->next = temp->next;

	temp->next->prev = temp;
	temp->next = nodeToInsert;

	nodeToInsert->prev = temp ;

}


int main(){

	Node* node1 = new Node(10);
	Node* head = node1;
	Node* tail = node1;

	printLl(head);
	// cout<<getLength(head)<<endl;

	insertAtHead(head,11);
	insertAtHead(head,15);
	printLl(head);


	insertAtTail(tail,8);
	printLl(head);

	insertInPosition(head,tail,50,5);
	printLl(head);

	return 0;
}