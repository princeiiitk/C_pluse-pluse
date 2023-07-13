#include <iostream>

using namespace std;
class Node
{
public:
  int data;
  Node *next;
  Node *top;
};
void push(Node *st, int x)
{
  Node *temp = new Node;

  if (temp == NULL)
  {
    cout << "Stack Overflow" << endl;
  }
  else
  {
    temp->data = x;
    temp->next = st->top;
    st->top = temp;
  }
}
void display(Node *st)
{
  Node *temp = st->top;
  while (temp != NULL)
  {
    cout << temp->data << "->";
    temp = temp->next;
  }
}
int pop(Node *st)
{
  int x = 0;
  if (st->top == NULL)
  {
    cout << "Stack Underflow" << endl;
  }
  else
  {
    int y = st->top->data;
    Node *p = st->top;
    st->top = st->top->next;
    delete p;
    x = y;
  }
  return x;
}
int peak(Node *st, int pos){
   Node *p=st->top;
   for(int i=0 ; p!=NULL && i<pos-1;i++){
    p=p->next;
   }
   if(p!=NULL){
    return p->data;
   }
   else{
    return 0;
   }
   
}

int main()
{
  Node st;
  st.top = NULL;

  push(&st, 2);
  push(&st, 25);
  push(&st, 5);
  push(&st, 7);
  push(&st, 9);
  // int deletedele = pop(&st);
  // cout << deletedele << endl;
  display(&st);
  cout<<endl;
  int indexvalue=peak(&st,2);
  cout<<indexvalue<<endl;
}