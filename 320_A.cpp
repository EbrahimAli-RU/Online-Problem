#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int sum=0,check=0;
    if(s[0]!='1')
    {
        cout<<"NO"<<endl;
        return 0;
    }
    else
    {
        for(int i=1;i<s.size();i++)
        {
            if((s[i]=='4' ||s[i]=='1') && sum<=2)
            {
                if(s[i]=='4')
                {
                    sum++;
                    if(sum>2)
                    {
                        cout<<"NO"<<endl;
                        check=1;
                        break;
                    }
                }
                else
                    sum=0;
            }

            else
            {
                cout<<"NO"<<endl;
                check=1;
                break;
            }
        }
    }
    if(check==0)
        cout<<"YES"<<endl;


    return 0;
}
