#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin>>n;
    ll arr[n],sum=0,Count=1;
    for(int i=0;i<n;i++)
    {
       scanf("%lld",&arr[i]);
    }
    sort(arr,arr+n);
    sum=arr[0];
    for(int i=1;i<n;i++)
    {

        if(sum<=arr[i])
        {
            Count++;
            sum +=arr[i];
        }
    }

    cout<<Count<<endl;

    return 0;
}
