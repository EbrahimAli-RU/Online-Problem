#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n;
    k=n/2;
    cout<<k<<endl;
    if(n%2==0)
    {
        for(int i=0;i<k-1;i++)
        {
            cout<<2<<" ";
        }
        cout<<2<<endl;
    }
    else{
        for(int i=0;i<k-1;i++)
        cout<<2<<" ";
    cout<<3<<endl;}

    return 0;
}

