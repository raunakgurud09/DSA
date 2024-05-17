#include <bits/stdc++.h>
using namespace std;

bool judgeSquareSum(int c)
{
  long long l = 1;
  long long r = sqrt(c);

  if ((int)sqrt(c) * (int)sqrt(c) == c)
    return true;

  while (l <= r)
  {
    long long prod = l * l + r * r;

    if (prod > c)
      r--;
    else if (prod < c)
      l++;
    else
      return true;
  }

  return false;
}

int main()
{
  return 0;
}