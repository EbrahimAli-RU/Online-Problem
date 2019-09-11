#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a,b,sum=0,Min;
    cin>>n>>m;
    int arr[n];
    for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        for(int i=1;i<=m;i++)
        {
            cin>>a>>b;
            Min=min(arr[a],arr[b]);
            sum=sum+Min;
        }
        cout<<sum<<endl;

    return 0;
}
