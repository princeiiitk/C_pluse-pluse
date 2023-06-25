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
void create(int *arr,int n){
    head=new node(arr[0]);
    node *last;
    last=head;
    for(int i=1 ; i<n ; i++){
        node *temp=new node(arr[i]);
        last->next=temp;
        last=temp;

    }
}
void display(node *p){
    while(p!=0){
        cout<<p->data<<"->"<<" ";
        p=p->next;
    }
    cout<<endl;
}
void sum(node *p){
    int sum1=0;
       while(p!=0){
        sum1=sum1+p->data;
        p=p->next;
    }
    cout<<sum1<<endl;

}

int main(){
    int arr[]={3 ,45,6,6,7,9};
    create(arr,6);
    display(head);
    sum(head);
}