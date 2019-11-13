#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,length,d,Min=10,Max=0;
    cin>>n>>k;
    string s;
    cin>>s;
    if(n==1)
        cout<<0<<endl;
    else
    {
        length=s.size();
    int arr[length];
    d=s[0]-48;
    if(d!=1)
        k--;
    for(int i=1;i<length;i++)
    {
        arr[i]=s[i]-48;

    }
    cout<<1;
    for(int i=1;i<n;i++)
    {
        if(k>=1 && arr[i]!=0)
        {
            printf("%d",Max);
            k--;
        }
        else
            printf("%d",arr[i]);
    }
    }


    return 0;
}
