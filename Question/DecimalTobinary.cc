#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> DecimalToBinary(int n){
    vector<int>v;
    vector<int>v1;
    while(n>0){
        v.push_back(n%2);
        n=n/2;
    }
    for(int i=v.size()-1;i>=0;i--){
       
        cout<<v[i];
        v1.push_back(v[i]);
      
    }
    return v1;
  
  
}
int main(){

    int n;
    cout<<"enter number"<<endl;

    cin>>n;
    DecimalToBinary(n);

    return 0; 
}