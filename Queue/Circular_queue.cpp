#include<bits/stdc++.h>
using namespace std;
class CircularQueue
{
    public:
    int *arr;
    int front;
    int rear;
    int size;
    CircularQueue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }
    bool isEmpty()
    {
        return front == -1;
    }
    bool isFull()
    {
        return (rear + 1) % size == front;
    }
    void enqueue(int value)
    {
        if(isFull())
        {
            cout << "Queue is Full\n";
            return;
        }
        if(front == -1)
        {
            front = 0;
        }
        rear = (rear + 1) % size;
        arr[rear] = value;
        cout << value << " inserted\n";
    }
    void dequeue()
    {
        if(isEmpty())
        {
            cout << "Queue is Empty\n";
            return;
        }
        cout << arr[front] << " deleted\n";
        if(front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front = (front + 1) % size;
        }
    }
    int getFront()
    {
        if(isEmpty())
        {
            cout << "Queue is Empty\n";
            return -1;
        }
        return arr[front];
    }
    int getRear()
    {
        if(isEmpty())
        {
            cout << "Queue is Empty\n";
            return -1;
        }
        return arr[rear];
    }
    void display()
    {
        if(isEmpty())
        {
            cout << "Queue is Empty\n";
            return;
        }
        int i = front;
        while (true)
        {
            cout << arr[i] << " ";
            if(i == rear)
                break;
            i = (i + 1) % size;
        }
        cout<<endl;
    }
};
int main()
{
    CircularQueue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.display();
    q.dequeue();
    q.dequeue();
    q.enqueue(50);
    q.enqueue(60);
    q.display();
    cout<<"Front="<<q.getFront()<<endl;
    cout<<"Rear="<<q.getRear()<<endl;
    return 0;
}