#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    char name[100];
    int roll;
    double gpa;
};
int main()
{
    student a,b;
    cin>>a.name>>a.roll>>a.gpa;
    cin>>b.name>>b.roll>>b.gpa;
    cout<<a.name<<endl<<a.roll<<endl<<a.gpa;
    cout<<b.name<<endl<<b.roll<<endl<<b.gpa;
    return 0;
}