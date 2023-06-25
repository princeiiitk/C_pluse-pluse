#include<iostream>
using namespace std;
struct stack
{
    int size ;
    int top;
    int *S;
};
void pop(stack *st,){

}
void push(stack *st ,int x){
    if(st->top==st->size-1){
       cout<<"stack is overflow";
    }
    else{
        st->top++;
        st->S[st->top]=x;
       
    }
    
}
void display1(stack *st){
    for(int i=0 ; i<st->size ;i++){
        cout<<st->S[st->top];
        st->top--;
        }


}
int main(){
    //create a object this class
    struct stack st;
    cout<<"enter the size of stack"<<endl;
    cin>>st.size;
    st.S=new int[st.size];
    st.top=-1;
    for(int i=0 ; i<st.size;i++){
        int y;
        cin>>y;
        push(&st,y);
    }
    display1(&st);
    
}
