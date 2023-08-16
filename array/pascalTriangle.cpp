#include<bits/stdc++.h>
using namespace std;


vector<int> nCr(int n){

    vector<int> temp;
    temp.push_back(1);

    int ans =1;
    for(int i=1 ; i<n ; i++){
        ans*=(n-i);
        ans/=i;
        temp.push_back(ans);
    }

    return temp;
}

vector<vector<int>> pascalTriangle(int N) {
    // Write your code here.
    vector<vector<int>> ans;

    for(int i=1 ; i<=N ; i++){
        ans.push_back(nCr(i));
    }

    return ans;
}


int main(){



	return 0;
}