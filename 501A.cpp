#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,a1,b1;
    scanf("%d %d %d %d",&a, &b, &c, &d);
    int mMax=0,vMax=0;
    a1=a/250;b1=b/250;
    mMax=max((3*a)/10,a-(a1*c));
    vMax=max((3*b)/10,b-(b1*d));
    if(mMax>vMax)
        cout<<"Misha"<<endl;
    else if(mMax== vMax)
        cout<<"Tie"<<endl;
    else
        cout<<"Vasya"<<endl;

    return 0;
}
