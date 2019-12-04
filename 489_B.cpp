#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a,b,bMax=0,gMax=0,Count=0;
    cin>>n;
    int boys[n];
    memset(boys,0,sizeof(boys));
    for(int i=0;i<n;i++)
    {
        scanf("%d",&boys[i]);
        if(bMax<boys[i])
            bMax=boys[i];
    }
    sort(boys,boys+n);
    cin>>m;
    int girls[m];
    memset(girls,0,sizeof(girls));
    for(int i=0;i<m;i++)
    {
        scanf("%d",&girls[i]);
        if(gMax<girls[i])
            gMax=girls[i];
    }

    sort(girls,girls+m);
    int Min=min(bMax,gMax);
    for(int i=0,j=0;girls[j]<=Min+1&&boys[i]<=Min+1;)
    {
       if(abs(boys[i]-girls[j])<=1){
            Count++;

        //cout<<boys[i]<<" "<<girls[j]<<endl;
        i++;j++;
       }
       else
       {
           int g=min(boys[i],girls[j]);
           if(g==girls[j])
            j++;
           else
            i++;
       }
    }

cout<<Count<<endl;
    return 0;
}
