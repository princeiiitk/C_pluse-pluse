#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int x){
        data=x;
        next=NULL;
    }

}*first=NULL;
void create(int *arr , int n){
    first=new node(arr[0]);
    node *last;
    last=first;
    for(int i=1 ; i<n ; i++){
        node *temp=new node(arr[i]);
        last->next=temp;
        last=temp;
        }
}
int display(node *p){
    int count=0;
    while(p!=0){
        cout<<p->data<<"->"<<endl;
        count++;
        p=p->next;
    }
    return count;
    
}
int main(){
    int arr[]={1,2,3,4,5,5};
    create(arr,6);
    int ans=display(first);
    cout<<"total number of data  "<<ans<<endl;
}