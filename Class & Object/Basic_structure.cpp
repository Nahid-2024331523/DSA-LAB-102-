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
    student a;
    char temp[100]="Bashir Shahrier Nahid";
    strcpy(a.name,temp);
    a.roll=23;
    a.gpa=3.43;
    cout<<a.name<<endl<<a.roll<<endl<<a.gpa;
    return 0;
}