#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k2,k3,k5,k6,m,n;
    cin>>k2>>k3>>k5>>k6;
    m= min(k2,k5);
    m=min(m,k6);
    k2=k2-m;
    n=min(k2,k3);
    cout<<m*256+n*32<<endl;
    return 0;
}
