#include<bits/stdc++.h>
using namespace std;
class mystack
{
    public:
    list<int> l;
    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_back();
    }
    int top()
    {
        return l.back();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        return l.empty();
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