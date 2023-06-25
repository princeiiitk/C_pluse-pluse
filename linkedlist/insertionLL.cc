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

};
node *head=NULL;
void create(int *arr,int n){
    head=new node(arr[0]);
    node *last;
    last=head;
    for(int i=1 ; i<n; i++){
        node *temp=new node(arr[i]);
        last->next=temp;
        last= temp;
    }


}
void insertion(node *p,int k,int n,int value){
 
    for(int i=0 ;i<n; i++){
        p=p->next;
       
        if(i==k-1){
            node *temp=new node(value);
             temp->next=p->next;
            p->next=temp;
           
        }
    }
}
void display(node *p){
    while(p!=0)
    {
        cout<<p->data<<endl;
        p=p->next;
    }
    
}
int main(){
    int arr[]={4,5,7,8,0,9};
    create(arr,6);
    int pos1=3;
    int pos2=6;
    insertion(head,pos1,6,44);
     insertion(head,pos2,6,50);
    display(head);
}