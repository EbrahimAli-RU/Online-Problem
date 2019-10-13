#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,k,testCase;
    cin>>testCase;
    float f,g;
    for(int i=0;i<testCase;i++)
    {
        scanf("%d %d %d %d %d",&a,&b,&c,&d,&k);
         f=float(a)/float(c);
        // printf("%lf",f);
         g=float(b)/float(d);
         if(ceil(f)+ceil(g)<=k)
            cout<<ceil(f)<<" "<<ceil(g)<<endl;
         else
            cout<<-1<<endl;
    }



    return 0;
}
