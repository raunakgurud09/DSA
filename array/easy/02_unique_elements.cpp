#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
  int n = nums.size();
  set<int> un;
  for (int i = 0; i < n; i++)
  {
    un.insert(nums[i]);
  }

  int cnt = 0;
  for (auto s : un)
  {
    nums[cnt] = s;
    cnt++;
  }

  return un.size();
}

int _removeDuplicates(vector<int> &nums)
{
  int n = nums.size();
  if (n == 0)
  {
    return 0;
  }

  int k = 1;
  for (int i = 1; i < n; i++)
  {
    if (nums[i] != nums[i - 1])
    {
      nums[k] = nums[i];
      k++;
    }
  }

  return k;
}

int main()
{
  vector<int> arr = {
      3,
      4,
      5,
      1,
      2,
      2,
      5,
      1};

  cout << removeDuplicates(arr) << endl;

  for (int i = 0; i < arr.size(); i++)
  {
    cout << arr[i] << " " << endl;
  }

  return 0;
}