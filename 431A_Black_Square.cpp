#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a1,a2,a3,a4,length,sum=0;
    cin>>a1>>a2>>a3>>a4;
    string s;
    cin>>s;
    length=s.size();
    for(int i=0;i<length;i++)
    {
        if(s[i]=='1')
            {
                sum=sum+a1;
                //cout<<sum<<endl;
            }
        else if(s[i]=='2')
           {
                sum=sum+a2;
               // cout<<sum<<endl;
           }
        else if(s[i]=='3')
            {
                sum=sum+a3;
                //cout<<sum<<endl;
            }
        else if(s[i]=='4')
            {
                sum=sum+a4;
                //cout<<sum<<endl;
            }
    }
    cout<<sum<<endl;


    return 0;
}
