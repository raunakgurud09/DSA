#include <bits/stdc++.h>
using namespace std;

bool search(vector<int> &nums, int target)
{
  int l = 0;
  int r = nums.size() - 1;

  while (l <= r)
  {
    int mid = l + (r - l) / 2;

    if (nums[mid] == target)
    {
      return true;
    }
    else if (nums[mid] == nums[l] && nums[mid] == nums[r])
    {
      l++, r--;
    }

    else if (nums[l] <= nums[mid])
    {
      // left sorted
      if (target < nums[l] || target > nums[mid])
      {
        l = mid + 1;
      }
      else
      {
        r = mid - 1;
      }
    }
    else
    {
      // right sorted
      if (target > nums[r] || target < nums[mid])
      {
        r = mid - 1;
      }
      else
      {
        l = mid + 1;
      }
    }
  }
  return false;
}

int main()
{
  return 0;
}