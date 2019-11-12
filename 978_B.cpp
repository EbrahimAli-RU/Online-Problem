#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int n;
    cin>>n;
    cin>>s;
    int length=s.size(),Size=0,ans=0;

    for(int i=0;i<length;i++)
    {
        if(s[i]=='x')
        {
            Size +=1;
        }
        else
        {
            if(Size>2)
            {
                ans += Size-2;
            }

            Size=0;
        }
    }
   //cout<<Size<<endl;
    if(Size>2)
    {
        ans +=Size-2;
        cout<<ans<<endl;
    }
    else
        cout<<ans<<endl;

    return 0;
}
