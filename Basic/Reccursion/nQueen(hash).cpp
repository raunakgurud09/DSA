#include<bits/stdc++.h>
using namespace std;

void printNQueensHash(
	int col,
	vector<vector<string>> &ans,
	vector<string> &board,
	vector<int> &leftRow,
	vector<int> &lowerDiagonal,
	vector<int> &upperDiagonal,
	int n
	){

	if(col == n){
		ans.push_back(board);
		return;
	}


	for(int row = 0;row <n;row++){

		if(leftRow[row] == 0 && lowerDiagonal[row+col] ==0 && upperDiagonal[n-1 + col -row]==0){
			board[row][col] = 'Q';
			leftRow[row] =1;
			upperDiagonal[n-1+col -row] = 1;
			lowerDiagonal[row+col] =1;
			printNQueensHash(col + 1,ans,board,leftRow,lowerDiagonal,upperDiagonal,n);
			board[row][col] = '.';
			leftRow[row] =0;
			upperDiagonal[n-1+col -row] = 0;
			lowerDiagonal[row+col]= 0;
		}

	}


}

int main(){

	int n;
	cin >> n;
	vector<vector<string>> ans;
	vector<string> board(n);

	string s(n,'.');
	for(int i = 0;i< n;i++){
		board[i] = s;
	}

	vector<int> leftRow(n,0), upperDiagonal(2*n-1,0), lowerDiagonal(2*n-1,0);

	printNQueensHash(0,ans,board,leftRow,lowerDiagonal,upperDiagonal,n);


	for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++)
            cout << ans[i][j]<<endl;
        cout << endl;
    }




	return 0;
}