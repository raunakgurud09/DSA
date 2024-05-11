
#include <bits/stdc++.h>
using namespace std;

int search(vector<int> &nums, int target)
{

  int left = 0;
  int right = nums.size() - 1;

  while (left <= right)
  {
    int mid = left + (right - left) / 2;

    if (nums[mid] == target)
    {
      return mid;
    }

    // we are in the left sorted portion
    if (nums[left] <= nums[mid])
    {
      if (target < nums[left] || target > nums[mid])
      {
        left = mid + 1;
      }
      else
        right = mid - 1;
    }
    else
    {
      // we are in the right sorted portion
      if (target > nums[right] || target < nums[mid])
      {
        right = mid - 1;
      }
      else
      {
        left = mid + 1;
      }
    }
  }

  return -1;
}

int main()
{

  return 0;
}