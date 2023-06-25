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
    for(int i=1 ; i<n ; i++){
        node *temp=new node(arr[i]);
        last->next=temp;
        last=temp;

    }



}
void searching(node *p,int k){
    int i=1;
     while(p!=0){
       
        if(p->data==k){
              cout<<"key are found at index"<<i<<endl;
        }
       
        p=p->next;
        i++;
     }
}

int main(){
   
     int key=0;
    int arr[]={3,4,6,77,88,88,0,2};
    create(arr,8);
   
    searching(head,key);

}