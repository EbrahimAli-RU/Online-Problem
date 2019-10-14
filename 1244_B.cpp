#include<bits/stdc++.h>
using namespace std;

int main()
{
    int testCase,len,n,check=0;
    cin>>testCase;
    string str,str1;
    for(int i=0;i<testCase;i++)
    {
        cin>>n;
        cin>>str;
        if(str[0]=='1' || str[n-1]=='1')
        {
            cout<<n*2<<endl;
        }

        else
        {len=str.size();check=0;
            for(int j=0;j<(len/2)+2;j++)
            {

                if(str[j]=='1' || str[len-(j+1)]=='1')
                {
                    cout<<2*len-(2*j)<<endl;
                    check=1;
                    break;
                }
            }
            if(check==0)
                cout<<n<<endl;
        }
    }



    return 0;
}
