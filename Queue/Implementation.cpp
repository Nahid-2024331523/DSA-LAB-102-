#include<iostream>
using namespace std;
class Queue
{
    private:
    int *arr;
    int front;
    int rear;
    int size;
    public:
    Queue(int s)
    {
        size = s;
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
        return rear == size - 1;
    }
    void enqueue(int value)
    {
        if (isFull())
        {
            cout << "Queue Overflow" << endl;
            return;
        }
        if (isEmpty())
            front = 0;

        rear++;
        arr[rear] = value;
    }
    int dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue Underflow" << endl;
            return -1;
        }
        int value = arr[front];
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front++;
        }
        return value;
    }
    int peek()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty" << endl;
            return -1;
        }
        return arr[front];
    }
    void display()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty" << endl;
            return;
        }
        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    ~Queue()
    {
        delete[] arr;
    }
};
int main()
{
    Queue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.display();
    cout << "Dequeued: " << q.dequeue() << endl;
    q.display();
    cout << "Front Element: " << q.peek() << endl;
    return 0;
}