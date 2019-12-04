#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,Max=0;
    cin>>n;
    int arr[100005];
    memset(arr,0,sizeof(arr));
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        arr[a]++;
        if(Max<a)
            Max=a;
    }
    //cout<<Max<<endl;
    long long q,q1,sum=0,arr1[100005];
    memset(arr1,0,sizeof(arr1));

    for(int i=0;i<=100004;i++)
    {
        sum +=arr[i];
        arr1[i] =sum;
    }
    cin>>q;
    for(int i=0;i<q;i++)
    {
        scanf("%lld",&q1);
        if(q1>=Max)
            printf("%d\n",n);
        else
            printf("%lld\n",arr1[q1]);
    }


    return 0;
}
