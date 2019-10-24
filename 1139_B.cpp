#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n,a;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    ll sum=0;
    sum=arr[n-1];
    //cout<<sum<<endl;
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]<arr[i+1])
        {
            sum += arr[i];
            //cout<<arr[i]<<"   "<<arr[i+1]<<endl;
        }
        else if(arr[i]>=arr[i+1])
        {
            if((arr[i+1]-1)==0)
                break;
            else
            {
               // cout<<arr[i+1]-1<<" ";
                sum +=arr[i+1]-1;
                arr[i]=arr[i+1]-1;
                //cout<<sum<<" ";
            }
        }

    }

    cout<<sum<<endl;


    return 0;
}
