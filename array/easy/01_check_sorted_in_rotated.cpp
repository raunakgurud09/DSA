#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> &nums)
{
  int n = nums.size();
  bool once = nums[n - 1] <= nums[0];
  cout << once << endl;

  for (int i = 1; i < n; i++)
  {
    if (nums[i] < nums[i - 1])
    {
      if (once)
      {
        once = false;
      }
      else
      {
        return false;
      }
    }
  }

  return true;
}

int main()
{
  vector<int> arr = {3,4,5,1,2};

  cout << check(arr) << endl;
  return 0;
}