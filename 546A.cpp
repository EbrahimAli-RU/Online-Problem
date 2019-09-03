#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    ll n,cost=0,borrow=0,k,w;

    cin>>k>>n>>w;
    cost=k*(w*(w+1))/2;
    if(cost<=n)
        cout<<0<<endl;
    else{
    borrow=cost-n;
    cout<<borrow<<endl;}

    return 0;
}
