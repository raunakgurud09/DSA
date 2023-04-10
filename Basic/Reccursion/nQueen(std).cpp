#include<bits/stdc++.h>
using namespace std;

bool isSafe(int row,int col,vector<string> &board,int n){

	int curCol = col;
	int curRow = row;

	// check is present on the left row
	while(col >= 0){
		if(board[row][col] == 'Q') return false;
		col--;
	}


	col = curCol;
	row = curRow;
	// check is present on upper left diagonal
	while(row >= 0 && col >= 0){
		if(board[row][col] == 'Q') return false;
		row--;
		col--;
	}


	col = curCol;
	row = curRow;
	// check is present on lower left diagonal
	while(row < n && col >= 0){
		if(board[row][col] == 'Q') return false;
		row++;
		col--;
	}

	return true;

}


void printNQueens(int col,vector<vector<string>> &ans,vector<string> &board,int n){

	if(col == n){
		ans.push_back(board);
		return;
	}

	for(int row = 0 ; row < n ; row++){
		if(isSafe(row,col,board,n)){
			board[row][col] = 'Q';
			printNQueens(col+1,ans,board,n);
			board[row][col] = '.';
		}
	}

}


int main(){

	int n;
	cin>> n;
	vector<vector<string>> ans;
	vector<string> board(n);
	string s(n,'.');

	for(int i = 0 ;i <n;i++) {
		board[i] = s;
	}

	printNQueens(0,ans,board,n);

	for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++)
            cout << ans[i][j]<<endl;
        cout << endl;
    }


	return 0;
}