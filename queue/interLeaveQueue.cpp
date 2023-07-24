#include<bits/stdc++.h>
using namespace std;
void interLeaveQueue(queue < int > & q) {
    // Write your code here.
    int n = q.size();
    queue<int> store;

    for(int i =0 ; i<n/2 ; i++){
        int num = q.front();
        store.push(num);
        q.pop();
    }

    while(!store.empty()){
        int num = store.front();
        q.push(num);
        store.pop();

        int val = q.front();
        q.push(val);
        q.pop();
    }

}

int main(){


	return 0;
}