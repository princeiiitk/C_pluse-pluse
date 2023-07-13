#include<iostream>
using namespace std;
int main(){
int max=-1;
int n;
cin>>n;
int *arr=new int[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
for (int i = 0; i < n; i++)
{
    if(arr[i]>max){
        max=arr[i];
    }
}
cout<<"first max value"<<"->"<<max<<endl;
int secondmax=-1;

for (int i = 0; i < n; i++)
{
    if(arr[i]>secondmax && arr[i]!=max){
        secondmax=arr[i];
    }
}
cout<<"secondmax"<<"->"<<secondmax<<endl;



    return 0;

}