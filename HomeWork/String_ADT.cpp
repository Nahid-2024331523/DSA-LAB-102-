#include<bits/stdc++.h>
using namespace std;

class StringADT
{
    public:
    string s;

    StringADT(string s)
    {
        this->s = s;
    }

    int length()
    {
        return s.length();
    }

    char get(int index)
    {
        return s[index];
    }

    void insert(int index, string str)
    {
        s.insert(index, str);
    }

    void remove(int index, int count)
    {
        s.erase(index, count);
    }

    int search(string str)
    {
        return s.find(str);
    }

    string substring(int index, int count)
    {
        return s.substr(index, count);
    }

    void display()
    {
        cout << s << endl;
    }
};

int main()
{
    StringADT s("Hello World");

    s.display();

    cout << s.length() << endl;
    cout << s.get(1) << endl;

    s.insert(5, " C++");
    s.display();

    s.remove(5, 4);
    s.display();

    cout << s.search("World") << endl;

    cout << s.substring(0, 5) << endl;

    return 0;
}