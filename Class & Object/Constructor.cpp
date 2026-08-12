#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    int roll;
    int sem;
    double gpa;
    student(int roll , int sem , double gpa)
    {
        this->roll=roll;
        this->sem=sem;
        this->gpa=gpa;
    }
};
int main()
{
    student nahid(23,1,3.43);
    student jaber(22,1,3.44);
    student taqi(46,1,3.57);
    student swargo(59,1,3.14);
    student arafat(42,1,3.18);
    student mahi(56,1,3.71);
    student jitu(9,1,3.81);
    cout<<nahid.roll<<" "<<nahid.sem<<" "<<nahid.gpa<<endl;
    cout<<jaber.roll<<" "<<jaber.sem<<" "<<jaber.gpa<<endl;
    cout<<taqi.roll<<" "<<taqi.sem<<" "<<taqi.gpa<<endl;
    cout<<swargo.roll<<" "<<swargo.sem<<" "<<swargo.gpa<<endl;
    cout<<arafat.roll<<" "<<arafat.sem<<" "<<arafat.gpa<<endl;
    cout<<mahi.roll<<" "<<mahi.sem<<" "<<mahi.gpa<<endl;
    cout<<jitu.roll<<" "<<jitu.sem<<" "<<jitu.gpa<<endl;
    return 0;
}