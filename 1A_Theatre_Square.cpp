#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m,a,length,weidth;
    cin>>n>>m>>a;

    //int length,weidth;
    length=n/a;
    weidth=m/a;
    if(n%a!=0)
        length++;
    if(m%a!=0)
        weidth++;

    cout<<length*weidth<<endl;


    return 0;
}
