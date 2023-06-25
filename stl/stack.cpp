#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    
    stack<int>s1;
    s1.push(8);
    s1.push(9);
    for(int i=0 ; !s1.empty() ; i++){
        cout<<s1.top()<<" ";
        s1.pop();
    }
return 0 ;
}