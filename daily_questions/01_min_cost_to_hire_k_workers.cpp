#include <bits/stdc++.h>
using namespace std;

double mincostToHireWorkers(vector<int> &quality, vector<int> &wage,
                            int k)
{

  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  vector<pair<double, int>> ratio;
  int n = quality.size();

  for (int i = 0; i < n; i++)
  {
    ratio.emplace_back(static_cast<double>(wage[i] / quality[i]), i);
  }

  sort(begin(ratio), end(ratio));

  double maxRate = 0.0;
  int qualitySum = 0;

  priority_queue<int> maxHeap;

  for (int i = 0; i < k; i++)
  {
    qualitySum += quality[ratio[i].second];
    maxRate = max(maxRate, ratio[i].first);

    maxHeap.push(quality[ratio[i].second]);
  }

  double res = maxRate * qualitySum;

  for (int i = k; i < n; i++)
  {

    maxRate = max(maxRate, ratio[i].first);
    qualitySum -= maxHeap.top();
    maxHeap.pop();

    qualitySum += quality[ratio[i].second];
    maxHeap.push(quality[ratio[i].second]);

    res = min(res, maxRate * qualitySum);
  }

  return res;
}

int main()
{
}