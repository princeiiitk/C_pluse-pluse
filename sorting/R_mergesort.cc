#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void merge(int *arr, int l , int mid ,int h){

    vector<int>v;
 
   
     int i=l;
     int j=mid+1;
    for( ; i<=mid && j<=h ;){
        if(arr[i]<arr[j]){
           v.push_back(arr[i]);
            i++;
            
        }
        else{
             v.push_back(arr[j]);
            j++;
           
        }
    }
    for(;i<=mid ;i++){
         v.push_back(arr[i]);
    }
    for(;j<=h;j++){
        v.push_back(arr[j]);
    }
    for(int i=l ; i<=h ; i++){
        arr[i]=v[i-l];

    }
}
void R_merge_sort(int *arr ,int l, int h){
  int mid;
  if(l>=h) return;
  mid=(l+h)/2;
  std::cout<<mid<<endl;
  R_merge_sort(arr,l,mid);
  R_merge_sort(arr ,mid+1,h);
merge(arr,l,mid,h);
  }


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];

    }
    R_merge_sort(arr ,0, n-1);
    for(int i=0 ; i<n ; i++){
        std::cout<<arr[i]<<" ";
    }
}