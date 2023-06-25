#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2, n3;
    cin>>n1;
    cin>>n2;
    n3=n1+n2;
    int *arr1=new int[n1];
    int *arr2=new int[n2];
    int *arr3=new int[n3];
    for(int i=0 ; i<n1;i++){
        cin>>arr1[i];
    }
  for(int i=0 ; i<n2;i++){
        cin>>arr2[i];
    }
    int i=0 ,j=0,k=0;
    while (i<n1 && j<n2)
    {
        if(arr1[i]<arr2[j]){
            
            arr3[k]=arr1[i];
            k++;
            i++;
        
        }
        else {
            arr3[k]=arr2[j];
            j++;
            k++;
            
        }
    }
    for(; i<n1;i++){
          arr3[k]=arr1[i];
          k++;
          
    }
   for( ; j<n2;j++){
          arr3[k]=arr2[j];
          k++;
          
    }

      for(int i=0 ; i<n3;i++){
        
        cout<<arr3[i]<<" ";
    }
    
return 0 ;
}