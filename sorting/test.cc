#include<iostream>
using namespace std;
void merge(int *arr,int l , int mid ,int h){
       int arr1[h+1];
       int i,j,k;
       i=l;
       k=l;
       j=mid+1;
       while(i<=mid && j<=h){
            if(arr[i]<arr[j]){
                arr1[k]=arr[i];
                k++;
               
            }
            else{
                arr1[k]=arr[j];
                j++;
                k++;

            }
       }
    for(;i<=mid;i++){
        arr1[k]=arr[i];
        k++;

    }
     for(;j<=h;j++){
        arr1[k]=arr[j];
        k++;
        
    }
    for (int i = 0; i <h; i++)
    {
        arr[i]=arr1[i];
    }
    

}
void mergesort(int *arr,int l,int h){
   
    int mid;
    if(l<h){
        mid=(l+h)/2;

        mergesort(arr,l,mid);
        mergesort(arr,mid+1,h);
       merge(arr,l,mid,h);
    }
}
int main(){
    int n;
    std::cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        std::cin>>arr[i];
    }
    mergesort(arr,0,n);
    for (int i = 0; i < n; i++)
    {
        std::cout<<arr[i]<<" ";
    }
    
    

}
