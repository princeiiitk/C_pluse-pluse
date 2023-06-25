#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int x)
    {
        data = x;
        next = NULL;
    }

} *head = NULL;
void create(int *arr, int n)
{
    head = new node(arr[0]);

    node *tail;
    tail = head;
    for (int i = 1; i < n; i++)
    {
        node *temp = new node(arr[i]);

        tail->next = temp;
        tail = temp;
    }
}
void display(node *p)
{
    while (p != 0)
    {
        cout << p->data << "->";
        p = p->next;
    }
}
int main()
{

    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    create(arr, n);
    display(head);
}