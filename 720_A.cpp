#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+5],sum=0,Max=0;
    arr[0]=0;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>arr[i-1])
        {
            sum = sum+1;
        }
        else
        {
            if(Max<sum)
                {Max=sum;}
            sum=1;
        }
    }
    Max=max(Max,sum);

    cout<<Max<<endl;



    return 0;
}
