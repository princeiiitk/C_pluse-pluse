#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;

    for(int i=0 ; i<n ; i++){
        int x;
        cin>>x;
        v.push_back(x);
}
vector<int>::iterator it;
for( it=v.begin();it!=v.end();it++ ){
   cout<<*it<<endl;
}



return 0;
}