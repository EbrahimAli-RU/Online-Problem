#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int m,length=s.size();
    int arr[length+5];
    memset(arr,0,sizeof(arr));
    cin>>m;
    for(int i=1;i<length;i++)
    {
        if(s[i-1]==s[i])
        {
            arr[i]=arr[i-1]+1;
        }

        else
            arr[i]=arr[i-1];
    }
    int l,r;
    for(int i=0;i<m;i++)
    {
        scanf("%d %d",&l,&r);
        cout<<arr[r-1]-arr[l-1]<<endl;
    }
    //cout<<arr[5]<<endl;



    return 0;
}
