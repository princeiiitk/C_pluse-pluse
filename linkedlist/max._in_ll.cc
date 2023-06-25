#include<iostream>
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
}*head=NULL;
void create(int arr[],int n){ 
  
    head=new node(arr[0]);
    node *last;
    last=head;
    for(int i=1 ;i<n ; i++){
        node *temp=new node(arr[i]);
         last->next=temp;
         last=temp;
    }}
void maximum(node *p){
     
    int max=-88;
    while(p!=NULL){
        //  cout<<p->data<<endl;
        if((p->data)>max){
            max=p->data;
            
        }
        p=p->next;
    }
    cout<<max;
   
}
int main(){

int arr[]={2,3,4,5,77,88,99,0};
create(arr,8);
maximum(head);


}

















//     node *p;
// // cout<<sizeof(head)<<endl;
// // cout<<sizeof(node)<<endl;
// cout<<sizeof(p)<<endl;
// cout<<sizeof(*p);