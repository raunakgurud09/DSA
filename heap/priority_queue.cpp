#include <bits/stdc++.h>
using namespace std;

int main()
{
    // max heap
    priority_queue<int> pq;

    pq.push(2);
    pq.push(4);
    pq.push(6);
    pq.push(9);

    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;

    // min heap
    priority_queue<int,vector<int>,greater<int> > mh;

    mh.push(2);
    mh.push(4);
    mh.push(6);
    mh.push(9);

    cout<<mh.top()<<endl;
    mh.pop();
    cout<<mh.top()<<endl;



    return 0;
}