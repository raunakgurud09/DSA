#include <bits/stdc++.h>
using namespace std;


bool isPalindrom(int i,string &str){

	if (i >= str.size()/2) return true;

	if(str[i] != str[str.size()-i-1]){
		return false;
	}
	return isPalindrom(i+1,str);
}


int main()
{
	string str;
	cin>> str;

	cout<<isPalindrom(0,str);

    return 0;
} 