#include<bits/stdc++.h>
using namespace std;

bool findRedundantBrackets(string &s)
{
    
    stack<char> st;

    for(int i = 0 ; i < s.length();i++){

        char ch = s[i];

        if(
            ch == '(' || 
            ch == '+' || 
            ch == '-' || 
            ch == '*' || 
            ch == '/' 
        ) st.push(ch);
        else{
            
            if(ch == ')'){
                bool isRedundant = true;

                while(st.top() != '('){

                    char top = st.top();
                    
                    if(
                        top == '+' ||
                        top == '-' ||
                        top == '*' ||
                        top == '/'
                    ) isRedundant = false;

                    st.pop();
                }

                if(isRedundant) return true;

                st.pop();
            }
        }
    }

    return false;
}


int main(){
	
	// stack<int> st;

	// int t;
	// cin >> t;

	// for(int i = 0 ; i < t; i++){
	// 	int val;
	// 	cin>> val;
	// 	st.push(val);
	// }

	string str = "(a+(b))";
	cout<<str<<endl;

	cout<<findRedundantBrackets(str);


	

	return 0;

}