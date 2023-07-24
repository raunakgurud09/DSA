#include<bits/stdc++.h>
using namespace std;

queue<int> reverseQueueUsingStack(queue<int> q)
{
    stack<int> s;
    // Write your code here.
    while(!q.empty()){
        int num = q.front();
        s.push(num);
        q.pop();
    }


    while(!s.empty()){
        int num = s.top();
        q.push(num);
        s.pop();
    }

    return q;
}

void queueRecurrsion(queue<int> &q){
    if(q.empty()){
        return;
    }else{
        int num = q.front();
        q.pop();
        queueRecurrsion(q);
        q.push(num);
    }
} 


queue<int> reverseQueueUsingRecurrsion(queue<int> q)
{
    queueRecurrsion(q);
    return q;
}

int main(){

	return 0;
}