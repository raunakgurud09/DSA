#include <bits/stdc++.h>
using namespace std;

int findPeakElement(vector<int> &nums)
{
  int peak = 0;
  int idx = 0;
  int min = INT_MIN;
  int n = nums.size();

  for (int i = 1; i < n; i++)
  {
    int n1 = nums[i - 1];
    int n2 = nums[i + 1] || min;

    cout << min << endl;
    int curr = nums[i];

    if (n1 < curr && n2 < curr)
    {

      if (peak < curr)
      {
        idx = i;
      }
    }
  }
  return idx;
}

int findPeak(vector<int> &nums)
{
  int n = nums.size();
  int low = 0;
  int high = nums.size() - 1;
  while (low <= high)
  {
    int mid = low + (high - low) / 2;

    cout << low << " " << mid << " " << high << endl;
    if (nums[mid] > nums[mid + 1])
    {
      high = mid - 1;
    }
    else
    {
      low = mid + 1;
    }
  }
  return low;
}

int main()
{

  vector<int> nums = {1, 2, 1, 3, 5, 6, 4};

  cout << findPeak(nums) << endl;
  return 0;
}