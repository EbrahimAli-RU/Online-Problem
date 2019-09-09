#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
        int h=0,t=0,t1=0,f=0;
        if(n>=100)
    {
        h=n/100;
        n=n%100;}
        if(n>=20)
        {
            t=n/20;
            n=n%20;

        }
        if(n>=10)
        {
            t1=n/10;
            n=n%10;
        }
        if(n>=5)
        {
            f=n/5;
            n=n%5;

        }

       cout<<h+t+t1+f+n;


    return 0;
}
