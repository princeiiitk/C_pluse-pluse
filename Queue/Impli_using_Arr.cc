#include <iostream>
using namespace std;
class Queue
{
public:
    int front;
    int rear;
    int *Q;
};
void enqueue(Queue *q, int x, int n)
{
    if (q->rear == n - 1)
    {
        cout << "queue is full" << endl;
    }
    else
    {
        q->front++;
        q->Q[q->front] = x;
    }
}
void dequeue(Queue *q){
    int y=0;
    if(q->front==q->rear){
        cout<<"queue is empty"<<endl;
    }
    else{
        q->rear++;
        int x=q->Q[q->rear];
        y=x;

    }
    cout<<"deleted element->"<<y<<endl;
}
void display(Queue *q)
{
    while (q->front > q->rear)
    {
        q->rear++;
        cout << q->Q[q->rear] << " ";
    }
}
int main()
{
    Queue q;
    q.front = -1;
    q.rear = -1;
    cout << "enter the size of Queue" << endl;
    int n;
    cin >> n;
    q.Q = new int[n];
    enqueue(&q, 9, n);
    enqueue(&q, 1, n);
    enqueue(&q, 3, n);
    enqueue(&q, 5, n);
     enqueue(&q, 6, n);
      enqueue(&q, 7, n);
       enqueue(&q, 8, n);
        enqueue(&q, 0, n);
    dequeue(&q);
     dequeue(&q);
      dequeue(&q);
    display(&q);
}