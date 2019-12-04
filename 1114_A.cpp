#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,z,a,b,c;
    cin>>x>>y>>z;
    cin>>a>>b>>c;
    if(a<x)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    else
        a=a-x;
    if(a+b<y)
    {
        cout<<"NO"<<endl;
        return 0;
    }

    else
        b=b-y;
    if(a+b+c<z)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    else
        cout<<"YES"<<endl;



    return 0;
}
