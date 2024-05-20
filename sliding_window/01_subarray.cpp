#include <bits/stdc++.h>
using namespace std;

int numSubarraysWithSum(vector<int> &nums, int goal)
{
  int count = 0, i = 0, j = 0, sum = 0;
  while (i < nums.size())
  {
    sum += nums[i];
    while (j < nums.size() && sum > goal)
    {
      sum -= nums[j];
      j++;
    }
    count += i - j + 1;
    cout << i << " " << j << endl;
    i++;
  }
  return count;
}

int main()
{

  vector<int> arr = {1, 0, 1, 0, 1};
  int goal = 2;
  cout << numSubarraysWithSum(arr, goal) << endl;
  return 0;
}