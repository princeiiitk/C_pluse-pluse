#include<iostream>
using namespace std;
void max_min( int arr[], int n){
    int max=arr[0];
    int min=arr[0];
    
    for(int i=0 ; i<=n ; i++){
        if(arr[i]>max){
            max=arr[i];
        }
        else if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<max<<" "<<min;

}
int main(){
    int n ;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    max_min(arr,n);
   
    return 0 ;

}