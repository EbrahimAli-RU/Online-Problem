#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,ominus=0,oplus=0;
    cin>>n;
    string str;
    for(int i=1;i<=n;i++)
    {
        cin>>str;
        if(str[1]=='+')
            oplus=oplus+1;
        else if(str[1]=='-')
            ominus=ominus+1;

    }
   /* cin>>str;
    int res=oplus-ominus;
    cout<<oplus<<"  "<<ominus<<endl;
    if(str[2]=='+' || str[2]=='-' ){

        cout<<res<<endl;}
    else if(str[0]=='-')
    {
        cout<<res-1<<endl;
    }
    else if(str[0]=='+')
    {
        cout<<res+1<<endl;
    }*/
 int res=oplus-ominus;
    cout<<res<<endl;

    return 0;
}
