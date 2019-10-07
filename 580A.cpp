#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,Max=0,m,Count=0;
    cin>>n;
    int arr[n];
    cin>>arr[0];
    for(int i=1;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i-1]<=arr[i])
            {
                cout<<arr[i]<<" ";
                Count++;
            }
        else
        {
            if(Count>Max)
                Max=Count;
            Count=0;
            Count++;
        }

    }

    cout<<Max+1<<endl;

    return 0;
}
