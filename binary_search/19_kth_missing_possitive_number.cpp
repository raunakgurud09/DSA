#include <bits/stdc++.h>
using namespace std;

int findKthPositive(vector<int> &arr, int k)
{
  vector<int> nums = {-9};
  int last = arr[arr.size() - 1];
  int cnt = 1;

  for (int i = 0; i < last; i++)
  {
    if (arr[i] == cnt)
    {
      cout << "h" << endl;
    }
    else
    {
      cnt++;
      nums.push_back(cnt);
    }
  }

  for (int i = 0; i < nums.size(); i++)
  {
    cout << nums[i] << " ";
  }
  cout << endl;
  return -1;
}

int main()
{

  vector<int> arr = {2, 3, 4, 7, 11};
  cout << findKthPositive(arr, 2) << endl;
  return 0;
}