#include<bits/stdc++.h>
using namespace std;
class mystack
{
    public:
    vector<int> v;
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        return v.empty();
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