#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> &nums)
{
  unordered_map<int, int> mp;
  int n = nums.size();

  for (int i = 0; i < n; i++)
  {
    mp[nums[i]]++;
    if (mp[nums[i]] > n / 2)
    {
      return nums[i];
    }
  }

  return -1;
}

int _majorityElement(vector<int> &nums)
{

  int count = 0;
  int candidate = 0;

  for (int num : nums)
  {
    if (count == 0)
    {
      candidate = num;
    }

    if (num == candidate)
    {
      count++;
    }
    else
    {
      count--;
    }
  }

  return candidate;
}

int main()
{
  return 0;
}