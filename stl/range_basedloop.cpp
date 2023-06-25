#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<pair<int ,int>>vp;
    for(int i=0 ; i<n ; i++){
        int x,y;
        cin>>x>>y;
        vp.push_back(make_pair(x,y));

    }
    vector<pair<int,int>>::iterator it;
    for(pair<int,int> &value : vp){
        cout<<value.first<<value.second<<" ";
    }
    return 0;
}