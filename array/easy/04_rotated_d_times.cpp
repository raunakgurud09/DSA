#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int> &nums, int k)
{
  int n = nums.size();
  k %= n;

  vector<int> temp(k);

  int j = 0;
  for (int i = n - k; i < n; i++)
  {
    temp[j] = nums[i];
    j++;
  }

  j = n - 1;
  for (int i = k; i >= 0; i--)
  {
    nums[j] = nums[i];
    cout << nums[j] << " ";
    j--;
  }
  cout << endl;

  for (int i = 0; i < n; i++)
  {
    cout << nums[i] << " ";
  }
  cout << endl;

  j = 0;
  for (int i = 0; i < k; i++)
  {
    nums[i] = temp[j];
    j++;
  }
  return;
}

int main()
{
  vector<int> arr = {-1, -100, 3, 99};
  int k = 2;
  rotate(arr, k);

  for (int i = 0; i < arr.size(); i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}