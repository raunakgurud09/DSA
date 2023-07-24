#include<bits/stdc++.h>
using namespace std;

class node{
	public:
		int data;
		node *left;
		node *right;

	node(int val){
		this->data = val;
		this->left = NULL;
		this->right = NULL;
	}
};

node* buildTree(node* &root){
	
	int data;
	cin>>data;
	
	root = new node(data);

	if(data == -1){
		return NULL;
	}

	root->left = buildTree(root->left);
	root->right = buildTree(root->right);


	return root;
}

void buildLevelOrdertree(node* &root){

	queue<node*> q;
	int data;
	
	cin>> data;
	root = new node(data);

	q.push(root);

	while(!q.empty()){

		node* temp = q.front();
		q.pop();

		cout<<"Enter left node of "<<temp->left<<endl;
		int leftData;
		cin>>leftData;

		if(leftData != -1){
			temp->left = new node(leftData);
			q.push(temp->left);
		}

		cout<<"Enter right node of "<<temp->right<<endl;
		int rightData;
		cin>>rightData;

		if(rightData != -1){
			temp->right = new node(rightData);
			q.push(temp->right);
		}


	}


}

void levelOrderTraversal(node* root){

	queue<node*> q;
	q.push(root);
	q.push(NULL);

	while(!q.empty()){
		
		node* temp = q.front();
		q.pop();

		if(temp == NULL){
			cout<<endl;
			if(!q.empty()){
				q.push(NULL);
			}
		}else{
			cout<<temp->data<<" ";


			if(temp->left){
				q.push(temp->left);
			}

			if(temp->right){
				q.push(temp->right);
			}
		}

	}
}
void inorderTraversal(node* root){
	if(root == NULL){
		return;
	}

	inorderTraversal(root->left);
	cout<<root->data<<" ";
	inorderTraversal(root->right);
}
void preorderTraversal(node* root){
	if(root == NULL){
		return;
	}

	cout<<root->data<<" ";
	preorderTraversal(root->left);
	preorderTraversal(root->right);
}
void postorderTraversal(node* root){
	if(root == NULL){
		return;
	}

	postorderTraversal(root->left);
	postorderTraversal(root->right);
	cout<<root->data<<" ";
}


int main(){

	node* root = NULL;

	// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
	// buildTree(root);  

	//  1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
	buildLevelOrdertree(root);
	
	// 	     1
	//     /   \
	//    /     \	
	// 	 3       5 
	//  / \     /
	// 7  11  17 
 

	levelOrderTraversal(root);
	cout<<endl<<endl;
	
	inorderTraversal(root);
	cout<<"inorder"<<endl;

	
	preorderTraversal(root);
	cout<<"preorder"<<endl;
	

	postorderTraversal(root);
	cout<<"postorder"<<endl;

	return 0;
}