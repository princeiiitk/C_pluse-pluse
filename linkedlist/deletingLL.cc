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
    
    for(int i=1 ; i<n ;i++){
        node *temp=new node(arr[i]);
        last->next=temp;
        last=temp;

    }
}
int deleting(node *p,int k,int n){
    
       
    node *t=NULL;
    int x=-1;
   
    for(int i=0 ; i<n ;i++){
        //important
        t=p;
        p=p->next;
        
        
           if(i==k-1){
                   
                t->next=p->next;
                x=p->data;
                delete p;
                
           }
    }
return x;
}
void display(node *p){

    while(p!=0){
        
        cout<<p->data<<"->";
        p=p->next;
    }
}
int main(){
    int arr[6]={3,4,6,7,8};
    create(arr,5);
    int pos=3;
    int ans=deleting(head,pos,5);
    cout<<ans<<endl;
    display(head);
}