#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n,k,a,l=0;
    double f;
    cin>>n>>k;

    int div=n-k+1;

    ll sum=0,arr[k],arr1[n],sum1=0;
    arr1[0]=0;
    //cout<<sum1<<endl;
    for(int i=1;i<=n;i++)
    {
        scanf("%lld",&arr1[i]);
        sum=sum+arr1[i];
        if(i>=k)
        {
            //cout<<sum<<endl;
            sum1=sum1+sum;
           // cout<<sum1<<endl;
            sum=sum-arr1[i-(k-1)];
            //cout<<"SUM"<<sum<<endl;
        }

    }
    //cout<<sum1<<endl;
     f=(double)sum1/(double)div;
        printf("%lf\n",f);
        //cout.precision(8);


    return 0;
}


//3 1
//1 2 3
