#include <bits/stdc++.h>
using namespace std;

vector<int> findUnion(int arr1[], int arr2[], int n1, int n2)
{
  // Your code here
  // return vector with correct order of elements
  vector<int> ans;

  int l = 0, r = 0;

  while ((l < n1) && (r < n2))
  {

    if (arr1[l] <= arr2[r])
    {
      if (ans.size() == 0 || ans.back() != arr1[l])
      {
        ans.push_back(arr1[l]);
      }
      l++;
    }
    else
    {
      if (ans.size() == 0 || ans.back() != arr2[r])
      {
        ans.push_back(arr2[r]);
      }
      r++;
    }
  }

  while (l < n1)
  {
    if (ans.size() == 0 || ans.back() != arr1[l])
    {
      ans.push_back(arr1[l]);
    }

    l++;
  }

  while (r < n2)
  {
    if (ans.size() == 0 || ans.back() != arr2[r])
    {
      ans.push_back(arr2[r]);
    }
    r++;
  }

  return ans;
}

int main()
{
  return 0;
}