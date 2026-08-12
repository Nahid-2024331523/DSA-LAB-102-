#include <bits/stdc++.h>
using namespace std;
long long power(long long base, int n, long long x)
{
    long long result = 1;
    for (int i = 0; i < n; i++)
    {
        result *= base;
        if (result > x)
            return result;
    }
    return result;
}
long long nthRoot(long long x, int n)
{
    long long l = 1;
    long long r = x;
    while (l <= r)
    {
        long long mid = l + (r - l) / 2;
        long long value = power(mid, n, x);
        if (value == x)
        {
            return mid;
        }
        else if (value < x)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return -1;
}
int main()
{
    long long x;
    int n;
    cin >> x >> n;
    cout << nthRoot(x, n) << endl;
    return 0;
}