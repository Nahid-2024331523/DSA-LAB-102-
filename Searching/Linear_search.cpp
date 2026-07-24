#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int a[n];
    int i;
    for(i=0 ; i<n ; i++){
        cin>>a[i];
    }
    int num; cin>>num;
    int count=0;
    for(i=0 ; i<n ; i++){
        if(num==a[i]){
            cout<<num<<" found at index "<<i;
            count++;
            break;
        }
    }
    if(count==0){
        cout<<num<<" not found";
    }
    return 0;
}