#include<bits/stdc++.h>
using namespace std;

char findNonRepeating(string str) {

   unordered_map<char,int> mp;
   for(int i=0;i<str.length();i++) {
       mp[str[i]]++;
   }

   for(auto i=0 ; i<str.length() ;i++) {
       if(mp[str[i]]==1) {
          return str[i];
       }
   }

   return '#';

}

int main(){


	return 0;
}