#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int Blanced(string exp)
{
    stack<int> st;
    int n = exp.size();
    for (int i = 0; i < n; i++)
    {
        if (exp[i] == '{' || exp[i] == '(' || exp[i] == '[')

        { 
            
            st.push(exp[i]);
        }
        else if (st.empty())
        {
            cout << "not balaced" << endl;
            return 0 ;
        }
        else if (!st.empty() && exp[i] == '}')
         {
            if(st.top()!='{'){
                   return 0;
            }
            
           st.pop();
        }
        else if (!st.empty() && exp[i] == ')')
         {
            if(st.top()!='('){
                   return 0;
            }
            
           st.pop();
        }  
        
        else if (!st.empty() && exp[i] == ']')
        {
            if(st.top()!='['){
                   return 0;
            }
            
           st.pop();
        }
    }
    if (st.empty())
    {
        cout << "is balanced" << endl;
    }
    else
    {
        cout << "is not balenced" << endl;
    }
    return 0 ;
}
int main()
{

    string exp = "{}{}}";
    Blanced(exp);
    return 0;
}