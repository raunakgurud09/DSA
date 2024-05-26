#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices)
{
  int profit = 0;
  int mini = prices[0];
  int sum = 0;

  for (auto price : prices)
  {
    sum = price - mini;

    profit = max(profit, sum);

    mini = min(mini, price);
  }

  return profit;
}

int main()
{
  return 0;
}