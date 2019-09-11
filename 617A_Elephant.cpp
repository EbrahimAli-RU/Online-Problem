#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
        int h=0,t=0,t1=0,f=0;
        if(n>=5)
    {
        h=n/5;
        n=n%5;}
        if(n>=4)
        {
            t=n/4;
            n=n%4;

        }
        if(n>=3)
        {
            t1=n/3;
            n=n%3;
        }
        if(n>=2)
        {
            f=n/2;
            n=n%2;

        }

       cout<<h+t+t1+f+n;


    return 0;
}
