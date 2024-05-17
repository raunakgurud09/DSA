#include <bits/stdc++.h>
using namespace std;

vector<int> searchRange(vector<int> &nums, int target)
{
  vector<int> res(2, -1);
  int n = nums.size();

  for (int i = 0; i < n; i++)
  {
    if (target == nums[i])
    {
      if (n == 1)
      {
        res[1] = i;
      }
      res[0] = i;
      int j = i;
      while (j < n)
      {
        if (nums[j] != target)
        {
          break;
        }
        else
        {
          j++;
        }
        res[1] = j - 1;
      }
      break;
    }
  }
  return res;
}

vector<int> searchRange(vector<int> &nums, int target)
{
  vector<int> res(2, -1);

  res[0] = binarySearch(nums, target, true);
  res[1] = binarySearch(nums, target, false);

  return res;
}

int binarySearch(vector<int> &nums, int target, bool isLeft)
{
  int l = 0;
  int r = nums.size() - 1;
  int idx = -1;

  while (l <= r)
  {
    int mid = l + (r - l) / 2;

    if (nums[mid] > target)
    {
      r = mid - 1;
    }
    else if (nums[mid] < target)
    {
      l = mid + 1;
    }
    else
    {
      idx = mid;
      if (isLeft)
      {
        r = mid - 1;
      }
      else
      {
        l = mid + 1;
      }
    }
  }

  return idx;
}
int main()
{
  return 0;
}