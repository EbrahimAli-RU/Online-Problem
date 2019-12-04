#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,q;
    cin>>n>>m;
    int arr[n+1],ans[n+5],check[100005];
    memset(ans,0,sizeof(ans));

    memset(check,0,sizeof(check));
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=n;i>0;i--)
    {
        if(check[arr[i]]==0)
        {
            ans[i] =ans[i+1]+1;
            check[arr[i]]=1;
        }
        else
            ans[i]=ans[i+1];
    }


    for(int i=0;i<m;i++)
    {
        scanf("%d",&q);
        printf("%d\n",ans[q]);
    }

    return 0;
}
