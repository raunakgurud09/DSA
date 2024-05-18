#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<vector<int>> mat = {{10, 20, 15}, {21, 30, 14}, {7, 16, 32}};

  int rows = mat.size();
  int cols = mat[0].size();
  int i = 0;
  int j = 0;

  int up = mat[i - 1][2] || -1;

  cout << up << endl;

  return 0;
}