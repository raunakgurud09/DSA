#include<iostream>
using namespace std;

class Node {
public:
	int data;
	Node* next;


	//constructor
	Node(int data){
		this->data = data;
		this->next = NULL;
	}

	~Node(){
		int value = this->data;
		if(this->next != NULL){
			delete next;
			this->next = NULL;
		}
	}

};

void insertAtHead(Node* &head,int data){
	// create a new temp node
	Node* temp = new Node(data);
	temp->next = head;
	head = temp;
}

void insertAtTail(Node* &tail,int data){
	Node* temp = new Node(data);
	tail->next = temp;

	tail = temp;
}

void insertInPosition(Node* &head,Node* tail,int pos,int data){

	if(pos == 0){
		insertAtHead(head,data);
		return;
	}

	Node* temp = head;
	int cnt = 1;

	while(cnt < pos ){
		temp = temp->next;
		cnt++;
		if(temp->next == NULL){
			break;
		}
	}

	if(temp->next == NULL){
		insertAtTail(tail,data);
		return;
	}

	//create the insertion node
	Node* nodeToInsert = new Node(data);

	nodeToInsert->next = temp->next;
	temp->next = nodeToInsert;

}

//traverse a ll
void printLl(Node* &head){
	Node* temp = head;

	while(temp != NULL){
		cout<<temp->data<<"->";
		temp = temp->next;
	}
	cout<<"NULL"<<endl;
}

void deleteNode(Node* head,int position){

	if(position == 1){
		Node* temp = head;
		head = head->next;

		temp->next = NULL;
		delete temp;  
	}else {
		Node* curr = head;
		Node* prev = NULL;

		int cnt = 1;
		
		// itr in ll to reach the position
		while(cnt < position){
			prev = curr;
			curr = curr->next;
			cnt++;
		}

		prev->next = curr->next;

		curr->next = NULL;
		delete curr;

	}

}



int main(){

	Node* node1 = new Node(10);

	// cout<<node1->data<<endl;
	// cout<<node1->next<<endl;

	Node* head = node1;
	// printLl(node1);

	insertAtHead(head,12);
	insertAtHead(head,19);
	insertAtHead(head,8);

	printLl(head);

	Node* tail = node1;

	insertAtTail(tail,21);
	insertAtTail(tail,90);

	printLl(head);


	insertInPosition(head,tail,9,50);

	printLl(head);

	deleteNode(head,3);
	printLl(head);

	return 0;
}