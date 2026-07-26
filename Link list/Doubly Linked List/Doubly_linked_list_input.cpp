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
void print_forward(Node* head)
{
    Node* tmp=head;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
void print_backward(Node* tail)
{
    Node* tmp=tail;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->prev;
    }
    cout<<endl;
}
void insert_tail(Node* &head, Node* &tail , int val)
{
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
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    int v;
    while(1){
        cin>>v;
        if(v==-1){
            break;
        }
        insert_tail(head,tail,v);
    }
    print_forward(head);
    print_backward(tail);
    return 0;
}