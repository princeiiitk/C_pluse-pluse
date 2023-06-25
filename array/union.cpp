#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2;
    cin>>n1>>n2;

    int *a=new int[n1];
    int *b=new int[n2];
    for(int i=0 ; i<n1;i++){
        cin>>a[i];}
    for(int i=0 ; i<n2 ;i++){
        cin>>b[i];}
    int n3=n1+n2;
    int *c=new int[n3];
    for(int i=0 ; i<n1;i++){
        for(int j=0 ; j<n2; j++){
            for(int k=0 ; k<n2 ; k++){
                if(a[i]!=b[j]){
                    c[k]=a[i];
                    k++;
                    c[k]=b[j];
                    k++;
                    j++;

                }
            }
        }
    }
    for(int i=0 ;i<n3 ; i++){
        cout<<c[i]<<" ";
    }

return 0;
}