#include<bits/stdc++.h>
using namespace std;

int main()
{
    int length,j=0;
    char arr[5]={'h','e','l','l','o'};
    string s;
    cin>>s;
    length =s.size();
    int k=0;
    for(int i=0;i<length;i++)
    {
        if(s[i]==arr[j]){
            j++;
            if(j==5)
                break;
          }
    }
    if(j==5)
        cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        return 0;
}


