#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
class mystack
{
    public:
    Node* head=NULL;
    Node* tail=NULL;
    int sz=0;
    void push(int val)
    {
        sz++;
        Node* newnode=new Node(val);
        if(head==NULL){
            head=newnode;
            tail=newnode;
            return;
        }
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;
    }
    void pop()
    {
        sz--;
        Node* deletenode=tail;
        tail=tail->prev;
        delete deletenode;
        if(tail==NULL){
            head=NULL;
        }
        tail->next=NULL;
    }
    int top()
    {
        return tail->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        return head==NULL;
    }
};
int main()
{
    mystack st;
    int n; cin>>n;
    int i;
    for(i=0 ; i<n ; i++){
        int val;
        cin>>val;
        st.push(val);
    }
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}