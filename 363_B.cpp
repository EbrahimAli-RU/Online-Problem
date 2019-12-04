#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n],Min,sum=0,s[n],ans=0;

    for(int i=0;i<k;i++)
    {
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    Min=sum;
    s[0]=sum;
    for(int i=k;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(i>=k)
        {
            s[i-k+1]=(s[i-k]+arr[i])-arr[i-k];
        }
        if(Min>s[i-k+1])
        {
                Min=s[i-k+1];
                ans=i-k+1;
        }
    }
    cout<<ans+1<<endl;


    return 0;
}
