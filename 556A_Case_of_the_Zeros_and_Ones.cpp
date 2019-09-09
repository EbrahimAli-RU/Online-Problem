#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;

    int zeros=count(s.begin(),s.end(),'0');
    int ones=count(s.begin(),s.end(),'1');
    int Min;
    Min=min(zeros,ones);
    cout<<n-2*Min<<endl;
    return 0;
}
