#include <bits/stdc++.h>
using namespace std;

vector<int> findUnion(int arr1[], int arr2[], int n, int m)
{
  vector<int> ans(n + m);

  int l = 0, r = 0;

  while (l < n && r < m)
  {

    while (l + 1 < n && arr1[l] == arr1[l + 1])
      l++;

    // Updating the pointer j until we have identical
    // elements at consecutive position in arr2.
    while (r + 1 < m && arr2[r] == arr2[r + 1])
      r++;
      
    if (arr1[l] < arr2[r])
    {
      ans.push_back(arr1[l]);
      l++;
    }
    else if (arr1[l] == arr2[r])
    {
      ans.push_back(arr1[l]);
      l++;
      r++;
    }
    else
    {
      ans.push_back(arr2[r]);
      r++;
    }
  }

  while (r < m)
  {
    // Updating the pointer j until we have identical
    // elements at consecutive position in arr2.
    while (r + 1 < m && arr2[r] == arr2[r + 1])
      r++;

    // Storing the elements
    ans.push_back(arr2[r++]);
  }

  while (l < n)
  {
    // Updating the pointer i until we have identical
    // elements at consecutive position in arr1.
    while (l + 1 < n && arr1[l] == arr1[l + 1])
      l++;

    // Storing the elements.
    ans.push_back(arr1[l++]);
  }
}

int main()
{

  int arr1[] = {1, 2, 3, 4, 5};
  int arr2[] = {1, 2, 3};

  vector<int> ans;

  ans = findUnion(arr1, arr2, 5, 3);

  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i] << " ";
  }
  cout << endl;
  return 0;
}