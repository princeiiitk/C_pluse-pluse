#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
int main(){
    queue<int>q;
    q.push(2);
    q.push(3);
    q.push(6);

    for(int i=0 ; !q.empty();i++){
        cout<<q.front()<<endl;
        q.pop();
    }
    queue<string>q1;
    q1.push("prince");
    q1.push("kumar");
    q1.push("abhishek");
    int i=0;
    while(!q1.empty()){
        cout<<q1.front()<<" ";
        q1.pop();
    }

}
