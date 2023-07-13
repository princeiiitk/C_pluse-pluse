#include <iostream>

using namespace std;
class Stack
{
public:
    int top;
    int size;
    int *S;
};
void push(int x, Stack *st)
{
    if (st->top == st->size - 1)
    {
        cout << "Stack Overflow" << endl;
    }
    else
    {
        st->top++;
        st->S[st->top] = x;
    }
}
int pop(Stack *st)
{
    int y;
    if (st->top == -1)
    {
        cout << "stack is underflow ";
    }
    else
    {
        y = st->S[st->top];
        st->top--;
    }
    return y;
}
void display(Stack *st)
{
    while (st->top >= 0)
    {
        cout << st->S[st->top] << " ";
        st->top--;
    }
}
void isEmpty(Stack *st)
{
    if (st->top == -1)
    {
        cout << "stack is empty";
    }
    else
    {
        cout << "stack is not empty";
    }
}
int Anyindexele(Stack *st, int pos)
{ // call by ref.  but not modify
    int x = 0;
    if (st->top - pos + 1 < 0)
    {
        cout << "invalid position" << endl;
    }
    else
    {
        x = st->S[st->top - pos + 1];
    }
    return x;
}

int main()
{
    Stack st;
    st.top = -1;
    cout << "enter the size of stack" << endl;
    cin >> st.size;
    st.S = new int[100];
    //    cout<<"enter the elements of stack"<<endl;

    push(2, &st);
    push(3, &st);
    push(4, &st);
    push(5, &st);
    push(6, &st);
    push(7, &st);
    push(8, &st);
    push(9, &st);
    int deletelement = pop(&st);
    cout << "deleted element->" << deletelement << endl;
    isEmpty(&st);
    cout << endl;

    int indexValue = Anyindexele(&st, 2);

    cout << "index value-->" << indexValue << endl;

    display(&st);
    cout << endl;
    //    for(int i=0;i<st.size;i++){
    //     cin>>st.S[i];
    //    }
    //     for(int i=0;i<st.size;i++){
    //     cout<<st.S[i];
    //    }
    return 0;
}