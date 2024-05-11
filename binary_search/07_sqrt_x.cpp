#include <bits/stdc++.h>
using namespace std;

int mySqrt(int x)
{

  if (x == 0 || x == 1)
    return x;

  int l = 1;
  int r = x;

  int mid = -1;

  while (l <= r)
  {
    mid = l + (r - l) / 2;

    long long square = static_cast<long long>(mid) * mid;

    if (square == x)
    {
      return mid;
    }

    if (square > x)
    {
      r = mid - 1;
    }
    else
    {
      l = mid + 1;
    }
  }

  return static_cast<int>(std::round(r));
}

int main()
{
}