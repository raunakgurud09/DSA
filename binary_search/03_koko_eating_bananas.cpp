
#include <bits/stdc++.h>
using namespace std;


bool canEat(vector<int> &piles, int k, int h)
{
    int hours = 0;
    int n = piles.size();

    for (int i = 0; i < n; i++)
    {
        hours += piles[i] / k;
        // for decimal value
        if (piles[i] % k != 0)
        {
            hours++;
        }
    }

    return hours <= h;
}

int minEatingSpeed(vector<int> &piles, int h)
{

    int n = piles.size();
    int l = 1;
    int r = *max_element(begin(piles), end(piles));

    while (l < r)
    {
        int mid = l + (r - l) / 2;

        if (canEat(piles, mid, h))
        {
            r = mid;
        }
        else
        {
            l = mid + 1;
        }
    }

    return l;
}

int main()
{

    return 0;
}