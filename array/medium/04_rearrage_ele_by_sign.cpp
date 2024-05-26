#include <bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int> &nums)
{

  int n = nums.size();

  vector<int> pos;
  vector<int> neg;

  for (int i = 0; i < n; i++)
  {
    int curr = nums[i];
    if (curr < 0)
    {
      neg.push_back(curr);
    }
    else
    {
      pos.push_back(curr);
    }
  }

  for (int i = 0; i < n / 2; i++)
  {
    cout << pos[i] << " " << neg[i] << endl;
  }
  cout << endl;

  vector<int> ans;
  int c1 = 0;
  int c2 = 0;
  for (int i = 0; i < n; i++)
  {
    if (i % 2 == 0)
    {
      ans.push_back(pos[c1]);
      c1++;
    }
    else
    {
      ans.push_back(neg[c2]);
      c2++;
    }
  }

  return ans;
}

vector<int> _rearrangeArray(vector<int> &nums)
{

  int n = nums.size();
  vector<int> ans(n, 0);

  int pos = 0;
  int neg = 1;
  for (int i = 0; i < n; i++)
  {
    int curr = nums[i];
    if (curr > 0)
    {
      ans[pos] = curr;
      pos += 2;
    }
    else
    {
      ans[neg] = curr;
      neg += 2;
    }
  }

  return ans;
}

int main()
{

  vector<int> arr = {3, 1, -2, -5, 2, -4};
  vector<int> ans = rearrangeArray(arr);

  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i] << " ";
  }
  return 0;
}