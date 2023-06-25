#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *next;
}*first=NULL;
void create(int *A,int n){
    first=new node;
    first->data=A[0];
    first->next=NULL;
    struct node *t,*last;
    last=first;

    for(int i=1; i<n ;i++){
          struct node *t=new node;
          t->data=A[i];
          t->next=NULL;
          last->next=t;
          last=t;
    }
    }
void display(struct node *p){
while(p!=0){
    cout<<p->data<<"->";
    p=p->next;
}
}
int main(){
    int arr[]={2,4,5,6,7};
   create(arr,5);
   display(first);
}