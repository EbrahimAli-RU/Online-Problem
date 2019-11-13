#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,Min=0,Max=0,Max1=0,mod=0;
    cin>>n>>m;
    if(n==m)
        {
            int f=(n+m)/3;
        cout<<f<<endl;
        }
    else
    {
        Min=min(n,m);Max=max(n,m);Max1=Max/2;mod=Max%2;
    if(Max1>=Min)
        cout<<Min<<endl;
    else if(Max1<Min)
    {
        int c,temp=Min-Max1;
        c=temp/3;
        if(temp>=2 && mod==0)
        {
            cout<<Max1+c<<endl;

        }
        else if(temp%3!=0 || mod==1)
        {
            if(temp%3==2 && mod==1)
                cout<<Max1+c+1<<endl;
            else
                cout<<Max1+c<<endl;
        }
        else
            cout<<Max1<<endl;
    }
    }



    return 0;
}
