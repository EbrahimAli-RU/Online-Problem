#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+n);

    ll sum=0;
    for(int i=0;i<m;i++)
    {
        if(arr[i]<0)
        {
            sum += arr[i];
        }
        else
            break;
    }

    cout<<abs(sum)<<endl;
    return 0;
}
