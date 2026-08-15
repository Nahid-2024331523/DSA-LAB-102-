#include<bits/stdc++.h>
using namespace std;
int precedence(char op)
{
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    return 0;
}
int apply(int a, int b, char op)
{
    if (op == '+')
        return a + b;
    if (op == '-')
        return a - b;
    if (op == '*')
        return a * b;
    return a / b;
}
int evaluate(string s)
{
    stack<int> values;
    stack<char> ops;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
            continue;
        if (isdigit(s[i]))
        {
            int num = 0;
            while (i < s.size() && isdigit(s[i]))
            {
                num = num * 10 + (s[i] - '0');
                i++;
            }
            i--;
            values.push(num);
        }
        else if (s[i] == '(')
        {
            ops.push(s[i]);
        }
        else if (s[i] == ')')
        {
            while (!ops.empty() && ops.top() != '(')
            {
                int b = values.top();
                values.pop();
                int a = values.top();
                values.pop();
                char op = ops.top();
                ops.pop();
                values.push(apply(a, b, op));
            }
            ops.pop();
        }
        else
        {
            while (!ops.empty() &&
                   ops.top() != '(' &&
                   precedence(ops.top()) >= precedence(s[i]))
            {
                int b = values.top();
                values.pop();
                int a = values.top();
                values.pop();
                char op = ops.top();
                ops.pop();
                values.push(apply(a, b, op));
            }
            ops.push(s[i]);
        }
    }
    while (!ops.empty())
    {
        int b = values.top();
        values.pop();
        int a = values.top();
        values.pop();
        char op = ops.top();
        ops.pop();
        values.push(apply(a, b, op));
    }
    return values.top();
}
int main()
{
    string s;
    cin >> s;
    cout << evaluate(s) << endl;
    return 0;
}