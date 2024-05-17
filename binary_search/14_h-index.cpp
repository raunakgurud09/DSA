#include <bits/stdc++.h>
using namespace std;

bool isValid(vector<int> &citations, int h)
{
  int cnt = 0;
  for (int i = 0; i < citations.size(); i++)
  {
    if (citations[i] >= h)
    {
      cnt++;
    }
  }
  if (cnt >= h)
    return true;
  return false;
}

int hIndex(vector<int> &citations)
{
  int mx = 0;
  for (int i = 0; i < citations.size(); i++)
  {
    mx = max(mx, citations[i]);
  }

  int l = 0;
  int r = mx;
  int ans = 0;
  while (l <= r)
  {
    int mid = (l + r) / 2;

    if (isValid(citations, mid))
    {
      ans = mid;
      l = mid + 1;
    }
    else
    {
      r = mid - 1;
    }
  }

  return ans;
}

int main()
{
  return 0;
}