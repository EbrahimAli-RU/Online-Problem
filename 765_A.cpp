#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,check=0;
    string str,s,s1,s2;
    cin>>n;
    cin>>str;
    cin>>s1;
    s2=s1;
    for(int i=1;i<n;i++)
    {
        cin>>s;
        if(s[0]!=s1[5] && s[1]!=s1[6]  && s[2]!=s1[7])
        {
            cout<<"contest"<<endl;
            break;
            check=1;
        }
            s1=s;
    }
    if((str[0]==s[5] && str[1]==s[6]  && str[2]==s[7]) && check==0 || check==0 && (s2[0]==s[5] && s2[1]==s[6]  && s2[2]==s[7]))
        cout<<"home"<<endl;
    else
        cout<<"contest"<<endl;



    return 0;
}
