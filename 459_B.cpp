#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define M INT_MAX
int main()
{
    ll n,Max=0,Min=M,a,preMax=0,preMin=M,sum=1,sum1=1,Count=1;
    scanf("%lld",&n);
    scanf("%lld",&a);Max=a;Min=a;preMax=a;
    for(int i=1;i<n;i++)
    {
        scanf("%lld",&a);
        if(preMax==a)
            Count++;
        if(Max <= a)
        {
            sum++;

            if(Max<a)
            {
                sum=1;
                Max=a;
            }
        }

        else if(Min>=a)
        {
            sum1++;

            if(Min>a)
            {
                Min=a;
                sum1=1;
            }
        }

    }
    ll f=0;
    if(Count==n)
        printf("%lld %lld\n",f,(Count*(n-1))/2);
    //cout<<sum<<" "<<sum1<<endl;
    else
    printf("%lld %lld\n",Max-Min,sum*sum1);


    return 0;
}
