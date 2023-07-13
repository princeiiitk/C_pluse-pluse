#include <bits/stdc++.h>
using namespace std;
class Solution{
    int minEle;
    stack<int> s;
    public:
    
       /*returns min element from stack*/
       int getMin(){
           
         int min=INT_MAX;
         while(!s.empty()){
            if(min>s.top()){
             min=s.top();
         }
        
         }
         s.pop();
         return min;
       }
       
       /*returns poped element from stack*/
       int pop(){
           
        int y=0;
          if(!s.empty()){
             int x=s.top();
             s.pop();
             y=x;
         }
         return y;
       }
       
       /*push element x into the stack*/
       void push(int x){
           s.push(x);
          
       }
};
int main()
 {
    
        int q;
        cin>>q;
        Solution ob;
        while(q--){
           int qt;
           cin>>qt;
           if(qt==1)
           {
              //push
              int att;
              cin>>att;
              ob.push(att);
           }
           else if(qt==2)
           {
              //pop
              cout<<ob.pop()<<" ";
           }
           else if(qt==3)
           {
              //getMin
              cout<<ob.getMin()<<" ";
           }
       }
       cout<<endl;
    
    return 0;
}