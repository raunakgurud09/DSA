#include <bits/stdc++.h>
using namespace std;

int kthSmallest(vector<vector<int>> &matrix, int k)
{
  int n = matrix.size();
  vector<int> arr(n * n);

  int cnt = 0;

  // n2
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      arr[cnt] = matrix[i][j];
      cnt++;
    }
  }

  sort(arr.begin(), arr.end());

  return arr[k - 1];
}

int kthSmallest(vector<vector<int>> &matrix, int k)
{
  int n = matrix.size();
  priority_queue<int> pq;

  // in priority queue push takes o(n)
  // and top, pop - o(n)

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      pq.push(matrix[i][j]);
      if (pq.size() > k)
      {
        pq.pop();
      }
    }
  }

  return pq.top();
}

int main()
{

  // vector<vector<int>> matrix = {{1, 5, 9}, {10, 11, 13}, {12, 13, 15}};
  vector<vector<int>> matrix = {{1, 2}, {1, 3}};

  int b = kthSmallest(matrix, 1);
  cout << b << endl;

  return 0;
}