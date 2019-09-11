#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    if(a==1 && b==1)
        cout<<0<<endl;
    else if(abs(a-b)%3==0 || a==b)
    {
        cout<<a+b-3<<endl;
    }
    else
        cout<<a+b-2<<endl;

    return 0;
}
