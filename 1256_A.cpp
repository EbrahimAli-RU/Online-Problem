#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q,a,b,n,s,hold,hold1,re;
    cin>>q;
    while(q--)
    {
        scanf("%d %d %d %d",&a,&b,&n,&s);
        hold1=s;
        re=s%n;
        s=s-re;
        hold=s/n;
        if(re>b)
            printf("NO\n");

        else if(hold<=a)
            printf("YES\n");
        else if(hold>a)
        {
            if((a*n+b)>=hold1)
                cout<<"YES"<<endl;
            else
                printf("NO\n");
        }

    }


    return 0;
}
