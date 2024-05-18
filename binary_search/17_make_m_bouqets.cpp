#include <bits/stdc++.h>
using namespace std;
bool isValid(vector<int> &bloomDay, int m, int k, int mid)
{
  int n = bloomDay.size();
  int cnt = 0, total = 0;

  for (int i = 0; i < n; i++)
  {
    if (bloomDay[i] <= mid)
    {
      cnt++;
      if (cnt == k)
      {
        total++;
        cnt = 0;
      }
    }
    else
    {
      cnt = 0;
    }
  }

  if (total >= m)
    return true;
  return false;
}
int minDays(vector<int> &bloomDay, int m, int k)
{
  int n = bloomDay.size();
  if (m * k > n)
    return -1;

  int l = 1;
  int h;
  for (int k = 0; k < n; k++)
    h = max(h, bloomDay[k]);

    while (l < h)
  {
    int mid = (l + h) / 2;

    if (isValid(bloomDay, m, k, mid))
    {
      h = mid;
    }
    else
    {
      l = mid + 1;
    }
  }

  return l;
}

int main()
{

  vector<int> arr = {7, 7, 7, 7, 12, 7, 7};
  cout << minDays(arr, 2, 3) << endl;
  return 0;
}