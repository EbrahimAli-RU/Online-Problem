#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,arr[12],sum=0,check=0;
    cin>>k;
    for(int i=0;i<12;i++)
    {
        cin>>arr[i];
    }
    if(k==0)
    {
        cout<<0<<endl;
        check=1;
    }
    else{

    sort(arr,arr+12,greater<int>());
    int i;
    for(i=0;i<12;i++)
    {
        sum=sum+arr[i];
        if(sum>=k)
        {
            cout<<i+1<<endl;
            check=1;
            break;
        }


    }
    }
    if(check!=1)
     {
        cout<<-1<<endl;
    }

    return 0;
}


