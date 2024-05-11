
#include <bits/stdc++.h>
using namespace std;

int findMin(vector<int> &nums)
{
  int left = 0;
  int right = nums.size() - 1;
  int minValue = INT_MAX;
  while (left <= right)
  {
    int mid = (left + right) / 2;
    // search space is already sorted
    // then arr[low] will always be
    // the minimum in that search space:
    if (nums[left] <= nums[right])
    {
      minValue = min(minValue, nums[left]);
      break;
    }
    // if left part is sorted:
    if (nums[left] <= nums[mid])
    {
      // keep the minimum:
      minValue = min(minValue, nums[left]);
      // Eliminate left half:
      left = mid + 1;
    }
    // if right part is sorted:
    else
    {
      // keep the minimum:
      minValue = min(minValue, nums[mid]);
      // Eliminate right half:
      right = mid - 1;
    }
  }
  return minValue;
}

int main()
{

  return 0;
}