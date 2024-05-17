#include <bits/stdc++.h>
using namespace std;

int arrangeCoins(int n)
{
  int res;
  for (int i = 1; n > 0; i++)
  {
    n = n - i;
    res = i;
    cout<<n<<endl;
  }
  return res - 1;
  
}

int main()
{
  cout<<"ans -> "<<arrangeCoins(5)<<endl;
  return 0;
}