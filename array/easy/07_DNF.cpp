#include <bits/stdc++.h>
using namespace std;

void sortColors(vector<int> &nums)
{
  int n = nums.size();
  int i = 0;     // 0
  int j = 0;     // 1
  int k = n - 1; // 2

  while (j <= k)
  {
    if (nums[j] == 0)
    {
      swap(nums[i], nums[j]);
      i++;
      j++;
    }
    else if (nums[j] == 2)
    {
      swap(nums[j], nums[k]);
      k--;
    }
    else
    {
      j++;
    }
  }
}
int main()
{
  return 0;
}