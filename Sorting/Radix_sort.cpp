#include<bits/stdc++.h>
using namespace std;
int getMax(int a[], int n)
{
    int mx = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > mx)
            mx = a[i];
    }
    return mx;
}
void countingSort(int a[], int n, int place)
{
    int output[n];
    int count[10] = {0};
    for (int i = 0; i < n; i++)
        count[(a[i] / place) % 10]++;
    for (int i = 1; i < 10; i++)
        count[i] += count[i - 1];
    for (int i = n - 1; i >= 0; i--)
    {
        int digit = (a[i] / place) % 10;
        output[count[digit] - 1] = a[i];
        count[digit]--;
    }
    for (int i = 0; i < n; i++)
        a[i] = output[i];
}
void radixSort(int a[], int n)
{
    int mx = getMax(a, n);
    for (int place = 1; mx / place > 0; place *= 10)
        countingSort(a, n, place);
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    radixSort(a, n);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}