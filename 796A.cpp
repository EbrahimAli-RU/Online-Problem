#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,k,a,Min=100000,j;
    scanf("%d %d %d",&n,&m,&k);
    int arr[n+1];
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    if(m==n)
    {
        cout<<"KJHGF"<<endl;
        for(int j=m-1;j>0;j--)
        {
            if(arr[j]<=k && arr[j]!=0)
            {
            j=m-j;
            cout<<j<<endl;
            cout<<j*10<<endl;
            break;
            }
        }
    }
    else if(m==1)
    {
        for(int i=m+1;i<=n;i++)
        {
            if(arr[i]<=k && arr[i]!=0)
        {
            i=i-m;
            cout<<i*10<<endl;
            break;
        }
        }
    }
    else
    {
        for(int i=m+1,j=m-1;;i++,j--)
    {
        if(arr[i]<=k && arr[i]!=0 && i<=n)
        {
            i=i-m;
            cout<<i*10<<endl;
            break;
        }
        if(arr[j]<=k && arr[j]!=0 && j>0)
        {
            j=m-j;
            cout<<j*10<<endl;
            break;
        }
    }
    }



    return 0;
}
