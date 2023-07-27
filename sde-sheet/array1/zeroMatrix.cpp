#include<bits/stdc++.h>
using namespace std;


void printMatrix(vector<vector<int>> matrix,int n, int m){
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<m ;j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
}

vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {

	int col[m] = {0};
	int row[n] = {0};

	for(int i = 0; i< n; i++){
		for(int j = 0 ; j< m ; j++){
			if(matrix[i][j] == 0){
				row[i] = 1;
				col[j] = 1;
			}
		}
	}	


	for(int i = 0; i< n; i++){
		for(int j = 0; j< m; j++){
			if(row[i] || col[j]){
				matrix[i][j] = 0;
			}
		}
	}



	return matrix;

}

int main(){

	int n,m;
	cin>>n>>m;

	vector<vector<int>> matrix;

	for(int i=0; i<n; i++){
		vector<int> temp;
		for(int j=0 ;j<m ; j++){
			int val;
			cin>>val;
			temp.push_back(val);
		}
		matrix.push_back(temp);
	}

	matrix = zeroMatrix(matrix,n,m);

	printMatrix(matrix,n,m);

	return 0;
}