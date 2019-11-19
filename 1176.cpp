#include<bits/stdc++.h>
using namespace std;

int main()
{
    int queries,n,j=5,k=5;
    cin>>queries;
    while(queries--)
    {
        cin>>n;
        int a,Count=0;
        int arr[3];
        memset(arr,0,sizeof(arr));
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a);
            if(a%3==0)
                Count++;
            else if(a%3==1)
                arr[1]++;
            else if(a%3==2)
                arr[2]++;
        }
        int Min=0,Max=0,diff=0;
        Min=min(arr[1],arr[2]);
        Count+=Min;
        Max=max(arr[1],arr[2]);
        diff=Max-Min;
        if(diff+Min==arr[1])
        {
            int f=diff/3;
            Count +=f;
        }
        else if(diff+Min==arr[2])
        {
            diff=diff*2;
            int h=diff/3;
            Count += h;
        }
        cout<<Count<<endl;
    }



    return 0;
}
