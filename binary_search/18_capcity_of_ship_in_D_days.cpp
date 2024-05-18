#include <bits/stdc++.h>
using namespace std;

bool isValid(vector<int> &weights, int D, int mid)
{
  int n = weights.size();
  int w = 0;
  int days = 1;

  for (int i = 0; i < n; i++)
  {
    int curr = weights[i];
    if (curr > mid || days > D)
    {
      return false;
    }

    if ((w + curr) <= mid)
    {
      w += curr;
    }
    else
    {
      w = curr;
      days++;
    }
  }

  return (days <= D);
}
int shipWithinDays(vector<int> &weights, int days)
{

  int s = 0;
  int e = 0;
  for (int w : weights)
  {
    s = max(s, w);
    e += w;
  }

  while (s <= e)
  {
    int mid = (s + e) / 2;

    if (isValid(weights, days, mid))
    {
      e = mid - 1;
    }
    else
    {
      s = mid + 1;
    }
  }
  return s;
}

int main()
{

  return 0;
}