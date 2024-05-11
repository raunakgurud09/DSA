#include <bits/stdc++.h>
using namespace std;

double calculateMedian(vector<int> &merged)
{
  int total = merged.size();

  if (total % 2 == 1)
  {
    // If the total number of elements is odd, return the middle element
    // as the median.
    return static_cast<double>(merged[total / 2]);
  }
  else
  {
    // If the total number of elements is even, calculate the average of
    // the two middle elements as the median.
    int middle1 = merged[total / 2 - 1];
    int middle2 = merged[total / 2];
    return (static_cast<double>(middle1) +
            static_cast<double>(middle2)) /
           2.0;
  }
}

vector<int> mergeArray(vector<int> &num1, vector<int> &num2)
{
  vector<int> merged;
  int n = num1.size();
  int m = num2.size();

  for (int i = 0; i < n; i++)
  {
    merged.push_back(num1[i]);
  }
  for (int i = 0; i < m; i++)
  {
    merged.push_back(num2[i]);
  }

  // Sort the merged array.
  sort(merged.begin(), merged.end());
  return merged;
}
double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
{
  vector<int> merged = mergeArray(nums1, nums2);

  return calculateMedian(merged);
}

int main()
{
  return 0;
}