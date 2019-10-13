#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,z,Count=0;
    cin>>n>>m>>z;
    for(int i=m;i<=z;)
    {
        if(i%n==0)
        {
            Count++;
            //cout<<"KJHG"<<endl;
        }
        i=i+m;
        //cout<<i<<" ";
    }

cout<<Count<<endl;

    return 0;
}
