#include<iostream>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int length=str.size(),check=0,eCheck=0;
    for(int i=0;i<length-1;i++)
    {
        if(str[i]=='A'&&str[i+1]=='B')
        {
            check==1;i++;
        }

        else if(str[i]=='B'&&str[i+1]=='A')
        {
            eCheck=1;i++;
        }

    }

    if(check==eCheck==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;




    return 0;
}
