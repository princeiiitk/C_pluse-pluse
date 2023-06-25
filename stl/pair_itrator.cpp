#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>>vp;
    for(int i=0 ;i<n ;i++){
        int x;
        cin>>x;
        int y;
        cin>>y;
        vp. push_back (make_pair (x,y));

    }
    for(int i=0; i<n ; i++){
        cout<<vp[i].first<<" "<<vp[i].second<<endl;

    }
    return 0;
}