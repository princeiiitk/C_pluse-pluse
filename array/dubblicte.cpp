#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    int n ; 
    cin>>n;
    int *arr=new int[n];
    for(int i=0 ; i< n ; i++){
        cin>>arr[i];
    }
    int count=0;
    for(int i=0 ; i<n ;i++){
        for(int j=i+1 ; j<n ; j++){
            if(arr[i]==arr[j]){
                count++;
                arr[j]=-1;
                 v.push_back(arr[j]);
            }
        }
    }
    cout<<count<<endl;
    return 0;

}