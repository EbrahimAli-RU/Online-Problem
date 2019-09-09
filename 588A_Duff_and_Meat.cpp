#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,p,price=101,sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>p;
        if(p<price)
        {
            price=p;
        }
        sum=sum+a*price;
    }
    cout<<sum<<endl;
    return 0;
}
