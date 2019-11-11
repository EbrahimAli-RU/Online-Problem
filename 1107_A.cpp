#include<bits/stdc++.h>
using namespace std;

int main()
{
    int testCase,n;
    cin>>testCase;
    string s;
    while(testCase--)
    {
        scanf("%d ",&n);
        cin>>s;
        int length=s.size();
        if(length==2 && s[0]>=s[1])
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n2\n");
            cout<<s[0]<<" "<<s.substr(1) <<endl;
        }
    }


    return 0;
}
