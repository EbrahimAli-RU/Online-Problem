#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,arr[105],sum=0,sum1=0,Count=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    sort(arr, arr+n);

    for(int i=n-1;i<n;i--)
    {
        sum1=sum1+arr[i];
        sum=sum-arr[i];
        Count=Count+1;
        if(sum1>sum){
            cout<<Count<<endl;
        break;}

    }


    return 0;
}
