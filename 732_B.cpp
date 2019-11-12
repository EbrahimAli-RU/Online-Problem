#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m,in,a,sum=0,sum1=0;
    cin>>n>>m;
    int arr[n],arr1[m];
    scanf("%d",&a);
    arr[0]=a;

    for(int i=1;i<n;i++)
    {
        scanf("%lld",&in);
        sum=sum+in;
        arr[i]=in;
        if(arr[i-1]+in<m)
        {
            int temp=(m-(in+arr[i-1]));
            sum1=sum1+temp;
            arr[i]=in+temp;

        }

    }

    cout<<sum1<<endl;
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    cout<<endl;

    return 0;
}
