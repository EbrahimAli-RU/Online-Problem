#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s,n,a,b,check=0;

    cin>>s>>n;
    vector<pair<int,int> >v;
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        v.push_back(make_pair(a,b));
    }
    sort(v.begin(),v.end());

    for(int i=0;i<n;i++)
    {
        if(s<=v[i].first)
        {
            cout<<"NO"<<endl;
            check=1;
            break;
            //return 0;
        }
        else
            s=s+v[i].second;
    }
    if(check==0)
        cout<<"YES"<<endl;
    return 0;
}
