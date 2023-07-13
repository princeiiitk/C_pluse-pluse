#include <iostream>
using namespace std;
class Stack
{
public:
    int top;
    int size;
    char *S;
};
int oparend(char i)
{

    if (i == '+' || i == '-' || i == '*' || i == '/')
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int presidence(char i)
{
    if (i == '+' || i == '-')
    {
        return 1;
    }
    else if (i == '*' || i == '/')
    {
        return 2;
    }
    else if(i == '^'){
        return 3;
    }

    return 0;
}
void push(Stack *st, char i)
{
    if (st->top == st->size - 1)
    {
        cout << "Stack Overflow" << endl;
    }
    else
    {

        st->top++;
        st->S[st->top] = i;
    }
}
char pop(Stack *st)
{
    char x = 'q';
    if (st->top == -1)
    {
        cout << "Stack Underflow" << endl;
    }
    else
    {
        char y = st->S[st->top];
        x = y;
        st->top--;
    }

    return x;
}
void display(Stack *st)
{
    while (st->top >= 0)
    {
        cout << st->S[st->top] << " ";
        st->top--;
    }
}
int Empty(Stack *st){
    if(st->top==-1){
        return 0;
    }
    return 1;

}

string Conveter(string exp)
{
    Stack st;
    st.top = -1;
    st.size = exp.size();
    st.S = new char[st.size];

    char *postfix = new char[st.size];
    int j = 0;
    push(&st, ' ');

    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (oparend(exp[i]))
        {
            postfix[j] = exp[i];
            j++;
        }
        else
        {
            if (presidence(exp[i]) > presidence(st.S[st.top]))
            {
                push(&st, exp[i]);
            }
            else
            {
                while (presidence(exp[i]) <= presidence(st.S[st.top]))
                {
                    postfix[j] = pop(&st);
                    j++;

                }
                push(&st, exp[i]);
               
            }
        }
    }
    if(Empty(&st)){
while (st.top!= -1){
        postfix[j] = pop(&st);
        j++;
    }
    }
    
    return postfix;
}

int main()
{
// a+b*c-d/e
    string exp = "a+b*c";

    string ans = Conveter(exp);
    cout << ans << endl;
    return 0;
}