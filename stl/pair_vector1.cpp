#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>>vp;
    for(int i=0 ; i<n ; i++){
        int x,y;
        cin>>x>>y;
        vp.push_back(make_pair(x,y));
}
vector<pair<int,int>>::iterator it;
for(it=vp.begin();it!=vp.end() ;it++){
   cout<<(*it).first<<(*it).second<<endl;
   
}
    return 0;
}