#include<bits/stdc++.h>
using namespace std;
class Queue
{
public:
    int *val;
    int cnt;
    int size;
    Queue(int s)
    {
        val = new int[s];
        cnt = 0;
        size = s;
    }
    void enqueue(int v)
    {
        if (cnt == size)
        {
            cout << "Full" << endl;
            return;
        }
        for (int i = cnt; i > 0; i--)
        {
            val[i] = val[i - 1];
        }
        val[0] = v;
        cnt++;
    }
    int dequeue()
    {
        if (cnt == 0)
        {
            cout << "Empty" << endl;
            return 0;
        }
        cnt--;
        int value = val[cnt];
        return value;
    }
    int front()
    {
        if (cnt == 0)
        {
            cout << "Empty" << endl;
            return 0;
        }
        return val[cnt - 1];
    }
    int getSize()
    {
        return cnt;
    }
    bool isEmpty()
    {
        return cnt == 0;
    }
    void display()
    {
        if (cnt == 0)
        {
            cout << "Empty" << endl;
            return;
        }
        cout << "Queue: ";
        for (int i = cnt - 1; i >= 0; i--)
        {
            cout << val[i] << " -> ";
        }
        cout << "NULL" << endl;
    }
    ~Queue()
    {
        delete[] val;
    }
};
int main()
{
    Queue Q(5);
    Q.enqueue(4);
    Q.enqueue(5);
    Q.enqueue(1);
    Q.enqueue(2);
    Q.display();
    cout << "Front = " << Q.front() << endl;
    cout << "Dequeued = " << Q.dequeue() << endl;
    Q.display();
    cout << "Front = " << Q.front() << endl;
    cout << "Size = " << Q.getSize() << endl;
    cout << "isEmpty = " << Q.isEmpty() << endl;
    return 0;
}