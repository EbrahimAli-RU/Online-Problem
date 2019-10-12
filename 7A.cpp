#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s[8],s2="BBBBBBBB";
    int j=0,arr[8],Count=0;
    for(int i=0;i<8;i++)
    {
        cin>>s[i];
        if(s[0][i]=='B')
        {
            arr[j]=i;
            j++;
        }
        if(s[i]==s2)
        {
            Count++;
        }
    }
    if(Count!=8)
    {
        int check=1;
    for(int i=0;i<j;i++)
    {
        for(int k=1;k<8;k++)
        {
            if(s[k][arr[i]]=='B')
                check++;
            else
                continue;
        }
        if(check==8)
        {
            Count++;
        }
        check=1;
    }
        cout<<Count<<endl;
    }
    else
        cout<<Count<<endl;

    return 0;
}
