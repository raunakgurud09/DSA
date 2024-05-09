// 09/05/2024

#include <bits/stdc++.h>
using namespace std;

int search(vector<int> &nums, int target)
{
  int n = nums.size();

  int start = 0;
  int end = n - 1;

  while (start <= end)
  {
    int mid = start + (end - start) / 2;

    if (nums[mid] == target){
      return mid;
    }
    else if (nums[mid] > target){
      end = mid - 1;
    }
    else
    {
      start = mid + 1;
    }
  }

  return -1;
}

int main()
{

  vector<int> arr = {-1, 0, 3, 5, 9, 12};
  int target = 9;

  cout << search(arr, target) << endl;

  return 0;
}