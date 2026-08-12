#include<iostream>
using namespace std;
class Stack
{
    private:
    int *arr;
    int top;
    int size;
    public:
    Stack(int size)
    {
        this->size=size;
        arr=new int[size];
        top=-1;
    }
    bool isEmpty()
    {
        return top==-1;
    }
    bool isFull()
    {
        return top==size-1;
    }
    void push(int value)
    {
        if(isFull())
        {
            cout<<"Stack Overflow"<<endl;
            return;
        }
        arr[++top]=value;
    }
    int pop()
    {
        if(isEmpty())
        {
            cout<<"Stack Underflow"<<endl;
            return -1;
        }
        return arr[top--];
    }
    int peek()
    {
        if(isEmpty())
        {
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
        return arr[top];
    }
    void display()
    {
        if (isEmpty())
        {
            cout<<"Stack is Empty"<<endl;
            return;
        }
        cout<<"Stack: ";
        for (int i=top ; i>=0 ; i--)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    ~Stack()
    {
        delete[] arr;
    }
};
int main()
{
    Stack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.display();
    cout<<"Popped="<<s.pop()<<endl;
    s.display();
    cout<<"Top Element="<<s.peek()<<endl;
    return 0;
}