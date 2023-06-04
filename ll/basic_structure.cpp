include<iostream>
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

};

void insertAtHead(Node* &head,int data){
	// create a new temp node
	Node* temp = new Node(data);
	temp->next = head;
	head = temp;
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

	return 0;
}