#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int> &nums)
{
  int n = nums.size();

  int k = 0;
  for (int i = 0; i < n; i++)
  {
    if (nums[i] != 0)
    {
      nums[k] = nums[i];
      k++;
    }
  }
  cout << k << endl;

  for (int i = k; i < n; i++)
  {
    nums[i] = 0;
  }
}

int main()
{
  vector<int> arr = {0,1};
  moveZeroes(arr);

  for (int i = 0; i < arr.size(); i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}