#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
     int k;
     int count=0;
     cin>>k;
    int n ; 
    cin>>n;
    int *arr=new int[n];
    for(int i=0 ; i< n ; i++){
        cin>>arr[i];
}
sort(arr,arr+n);
int i=0 ,j=n-1;
while(i<j){
    if(arr[i]+arr[j]==k){
        count++;
        i++;
        j--;
    }
    else if(arr[i]+arr[j]<k){
        i++;

    }
    else{
        j--;
    }
    cout<<count<<endl;
}
return 0;
}
