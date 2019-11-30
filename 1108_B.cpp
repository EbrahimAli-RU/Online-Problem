#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,Max=0,a;
    cin>>n;
    int arr[10005];//,arr[1005];
    memset(arr,0,sizeof(arr));
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        arr[a]++;
        if(Max<a)
            Max=a;
    }
    cout<<Max<<" ";
    //cout<<sqrt(Max)<<endl;
    for(int i=1;i<=sqrt(Max);i++)
    {
        int h=Max%i;
        //cout<<h<<endl;
        if(h==0)
        {
            arr[i]--;
            if(i!=Max/i)
            arr[Max/i]--;
        }
    }
    //for(int i=1;i<=Max;i++)
    //{
   //     cout<<arr[i]<<" ";
   // }
    for(int i=Max;i>0;i--)
    {
        if(arr[i]==1){
            cout<<i<<endl;
            break;}
    }


    return 0;
}
