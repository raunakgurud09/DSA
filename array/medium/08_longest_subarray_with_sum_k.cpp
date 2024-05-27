#include <bits/stdc++.h>
using namespace std;

int lenOfLongSubArr(int nums[], int n, int k)
{
  // Complete the function
  int mxl = 0;
  unordered_map<int, int> mp;
  int sum = 0;

  for (int i = 0; i < n; i++)
  {
    sum += nums[i];

    if (sum == k)
    {
      mxl = max(mxl, i + 1);
    }

    int rem = sum - k;

    if (mp.find(rem) != mp.end())
    {
      int len = i - mp[rem];
      mxl = max(mxl, len);
    }

    if (mp.find(sum) == mp.end())
    {
      mp[sum] = i;
    }
  }

  return mxl;
}

int main()
{
  return 0;
}