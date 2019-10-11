#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,Max=0,sum=0,t,k=0;
    cin>>n>>t;
    int arr[n],l=0;
    if(n==1)
    {
        cin>>m;
        if(m>t)
            cout<<0<<endl;
        else
            cout<<1<<endl;
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            scanf("%d",&m);
            sum=sum+m;k++;
            if(sum>t)
            {
                if(Max<(k-1))
                {
                    Max=k-1;
                }
               // arr[l]=k-1;
                sum=sum-arr[l];
                k--; l++;
            }
        }
        //cout<<Max<<endl;
        arr[l]=k;
        cout<<max(Max,k)<<endl;
       // Max=max(Max,arr[l]);
    }
    //cout<<max_element(arr,arr+l)<<endl;
   // for(int i=0;i<=l;i++)
       // cout<<arr[i]<<" ";


    return 0;
}
