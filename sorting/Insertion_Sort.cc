#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void Insertion_sort(int *arr , int n){
    int x;
    for(int i=1; i<n ; i++){
         x=arr[i];
        for(int j=i-1 ; j>-1 && arr[j]>x ;j--){
             
              if(x<arr[j]){
                arr[j+1]=arr[j];
           
              }
               arr[j]=x;
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];

    }
    Insertion_sort(arr,n);
for(int i=0 ; i<n ; i++){
    std::cout<<arr[i]<<" ";
}

}