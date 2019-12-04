#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b;
    cin>>n;
    vector<pair<int,int> >v;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        v.push_back(make_pair(a,i));
    }
    sort(v.begin(),v.end());
    int length=v.size(),Count=0;
    for(int i=0,j=n-1;Count!=n/2;i++,j--)
    {Count++;
        cout<<v[i].second<<" "<<v[j].second<<endl;
    }


    return 0;
}
