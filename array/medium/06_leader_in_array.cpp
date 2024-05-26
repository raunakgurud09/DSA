#include <bits/stdc++.h>
using namespace std;

vector<int> leaders(int nums[], int n)
{
  // Code here
  vector<int> ans;

  int l;
  for (int i = 0; i < n; i++)
  {
    l = i + 1;
    int curr = nums[i];
    while (l < n)
    {
      if (curr < nums[l])
      {
        break;
      }
      l++;
    }

    if (l == n)
    {
      ans.push_back(curr);
    }
  }

  return ans;
}

vector<int> _leadersOptimal(int nums[], int n)
{

  vector<int> ans;
  int mx = -1;

  for (int i = n - 1; i >= 0; i--)
  {
    if (nums[i] >= mx)
    {
      mx = nums[i];
      ans.push_back(mx);
    }
  }

  reverse(ans.begin(), ans.end());

  return ans;
}

int main()
{

  int n = 6;
  int nums[6] = {16, 17, 4, 3, 5, 2};

  vector<int> ans = _leadersOptimal(nums, n);
  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i] << " ";
  }
  cout << endl;

  return 0;
}