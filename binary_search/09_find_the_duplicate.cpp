#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> &nums)
{

  int l = 1;
  int r = nums.size() - 1;

  while (l < r)
  {
    int mid = l + (r - l) / 2;
    int counter = 0;

    for (int num : nums)
    {
      if (num <= mid)
      {
        counter++;
      }
    }

    if (counter > mid)
    {
      r = mid;
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
  return 0;
}