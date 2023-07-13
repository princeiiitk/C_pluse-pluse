#include <iostream>
using namespace std;
class Stack
{
public:
    int top;
    int Size;
    char *S;
};
void push(Stack *st, char c)
{

    if (st->top == st->Size - 1)
    {
        cout << "Stack Overflow" << endl;
    }
    else
    {
        st->top++;
        st->S[st->top] = c;
    }
}
void pop(Stack *st)
{

    if (st->top == -1)
    {
        cout << "Stack Underflow" << endl;
    }
    else
    {

        st->top--;
    }
}

int isEmpty(Stack *st)
{

    if (st->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isBlance(Stack st, string exp)
{

    for (int i = 0; exp[i] != '\0'; i++)
    {

        if (exp[i] == '(')
        {
          push(&st, exp[i]);
        }
        else if (exp[i] == ')')
        {
            pop(&st);
        }
    }

    return isEmpty(&st) ? true : false;
}
int main()
{
    Stack st;
    st.top = -1;

    string exp = "(((4-3)*2))";
    st.Size = exp.size();
    int ans = isBlance(st, exp);
    cout << ans;

    return 0;
}