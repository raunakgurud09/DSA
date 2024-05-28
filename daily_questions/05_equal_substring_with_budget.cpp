#include <bits/stdc++.h>
using namespace std;

int equalSubstring(string s, string t, int maxCost)
{

  int n = s.size();

  int maxLen = 0;

  int j = 0;

  int currCost = 0;

  for (int i = 0; i < n; i++)
  {
    currCost += abs(s[i] - t[i]);

    while (currCost > maxCost)
    {
      currCost -= abs(s[j] - t[j]);
      j++;
    }

    maxLen = max(maxLen, i - j + 1);
  }


  return maxLen;
}

int main()
{
  string s = "abcd", t = "bcdf";
  int maxCost = 3;

  cout << equalSubstring(s, t, maxCost);

  return 0;
}