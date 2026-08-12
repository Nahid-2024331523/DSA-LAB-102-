#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    string name;
    int roll;
    int cse;
    int eee;
    student(string name,int roll,int cse,int eee)
    {
        this->name=name;
        this->roll=roll;
        this->cse=cse;
        this->eee=eee;
    }
    void total()
    {
        cout<<"total mark of "<<name<<"("<<roll<<")"<<" = "<<cse+eee<<endl;
    }
};
int main()
{
    student nahid("bashir shahrier nahid",23,72,95);
    nahid.total();
    student jaber("jaber bin huda",22,88,84);
    jaber.total();
    return 0;
}