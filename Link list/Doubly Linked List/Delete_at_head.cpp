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
void delete_head(Node* &head , Node* tail)
{
    Node* deletenode=head;
    head=head->next;
    delete deletenode;
    if(head==NULL){
        tail==NULL;
    }
    head->prev=NULL;
}
int main()
{
    Node* head=new Node(10);
    Node* a=new Node(20);
    Node* b=new Node(30);
    Node* c=new Node(40);
    Node* tail=new Node(50);
    head->next=a;
    a->prev=head;
    a->next=b;
    b->prev=a;
    b->next=c;
    c->prev=b;
    c->next=tail;
    tail->prev=c;
    delete_head(head,tail);
    print_forward(head);
    print_backward(tail);
    return 0;
}