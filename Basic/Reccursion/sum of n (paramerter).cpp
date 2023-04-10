#include <bits/stdc++.h>
using namespace std;


void sumN(int n ,int sum){
	if(n < 1) {
		cout<<sum<<endl;
		return;
	}
	cout<<n<<endl;
	sumN(--n,sum + n);

}

int main()
{
	int n;
	cin>>n;
	sumN(n,0);

    return 0;
}