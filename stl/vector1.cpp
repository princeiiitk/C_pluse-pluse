#include<iostream>
#include<bits/stdc++.h>
using namespace std; 
int main(){
   int n ;
   cin>>n;

vector<int>v;
for(int i=0 ; i<n ;i++){
    int x ; 
     cin>>x;
     v.push_back(x);
}
cout<<v.size()<<endl;;
for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
}
cout<<endl;
for(int value : v){
    cout<<value<<" ";
}
return 0 ; 

}