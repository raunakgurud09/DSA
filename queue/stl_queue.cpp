#include<bits/stdc++.h>
using namespace std;

int main(){

	queue<int> q;

	q.push(10);
	q.push(14);

	q.pop();
	q.pop();

	cout<<q.front()<<endl;

	if(q.empty()) cout<<"is empty"<<endl;
	else cout<<"not empty"<<endl;





	return 0;
}