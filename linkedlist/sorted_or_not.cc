#include<bits/stdc++.h>
using  namespace std;
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
void sorted(node *p , int n){
    node *q=NULL;
    for(int i=0 ; i<n ; i++){
        //  q=p;
        if(p->data>q->data){
            node *temp=new node;

        }
       
        p=p->next;
        q->next=p->next;

    }

}
void create(int arr[],int n){
    head=new node(arr[0]);
    node *tail;
    for(int i=1 ; i<n ; i++){
        node *temp=new node(arr[i]);
        tail->next=temp;
        tail=temp;
    }


}
int main(){
    int arr[5]={2,34,4,56,7};
    create(arr,5);
    sorted(head,5);

}