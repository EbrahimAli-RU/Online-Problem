#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q,k=2,m;
    cin>>q;
    int arr[q];
    for(int i=0;i<q;i++)
    {
        scanf("%d",&m);
        if(m==2)
        {
            printf("%d\n",k);
        }
        else if(m%2==0)
            printf("%d\n",0);
        else
            printf("%d\n",1);

    }


    return 0;
}
