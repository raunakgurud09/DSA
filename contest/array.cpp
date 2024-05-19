#include <bits/stdc++.h>
using namespace std;

bool isArraySpecial(vector<int> &nums)
{

  int n = nums.size();

  for (int i = 1; i < n; i++)
  {
    if ((nums[i] % 2) == (nums[i + 1] % 2))
      return false;
  }

  return true;
}

int main()
{

  vector<int> nums = {3, 4, 1, 2, 6};

  int l = 0, r = 0, max = 0, n = nums.size();

  cout << l << r << max << n << endl;
  return 0;
}