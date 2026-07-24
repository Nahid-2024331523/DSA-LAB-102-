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
    int f;
    for(i=0 ; i<n ; i++){
        if(num==a[i]){
            f=i;
        }
    }
    sort(a,a+n);
    int l=0 , r=n-1;
    int flag=0;
    while(l<=r){
        int mid=(l+r)/2;
        if(num==a[mid]){
            cout<<num<<" found at index "<<f;
            flag=1;
            break;
        }
        else if(num<a[mid]){
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    if(flag==0){
        cout<<num<<" not found";
    }
    return 0;
}