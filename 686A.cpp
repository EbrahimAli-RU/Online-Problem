#include<bits/stdc++.h>
using namespace std;

int main()
{
    char c;
    long long n,x,d,distress=0;
    scanf("%lld %lld",&n,&x);
    cout<<n<<" "<<x<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>c>>d;
        //cout<<i<<endl;
        if(c=='+')
        {
            x=x+d;
        }
        else
        {
            if(x>=d)
                x=x-d;
            else
                distress++;

        }
    }

    cout<<x<<" "<<distress<<endl;
    return 0;
}
