#include <bits/stdc++.h>
using namespace std;

int singleNonDuplicate(vector<int> &nums)
{
  int n = nums.size();
  int l = 0;
  int r = n - 1;

  while (l < r)
  {
    int mid = (l + r) / 2;
    if (mid % 2 == 1)
    {
      mid--;
    }

    if (nums[mid] != nums[mid + 1])
    {
      r = mid;
    }
    else
    {
      l = mid + 2;
    }
  }

  return nums[l];
}

int main()
{
  return 0;
}