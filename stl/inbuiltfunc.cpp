#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0; i<n ; i++){
        int x;
        cin>>x;
        v.push_back(x);

    }
    int min=*min_element(v.begin(),v.end());
    cout<<min<<endl;
    int max=*max_element(v.begin(), v.end());
    cout<<max<<endl;
    int sum=accumulate(v.begin(),v.end(),0);
    cout<<sum<<endl;
    reverse(v.begin()+3,v.end());
    for(auto val:v){
        cout<<val<<" ";
    }
    return 0;
}